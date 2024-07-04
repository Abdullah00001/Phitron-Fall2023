from rest_framework import serializers
from patient.models import Patient
from django.contrib.auth.models import User


class PatientSerializer(serializers.ModelSerializer):
    class Meta:
        model = Patient
        fields = "__all__"


class RegistrationSerializer(serializers.ModelSerializer):
    confirm_password = serializers.CharField(
        max_length=150, style={"input_type": "password"}, required=True
    )

    class Meta:
        model = User
        fields = [
            "first_name",
            "last_name",
            "email",
            "username",
            "password",
            "confirm_password",
        ]

    def save(self):
        first_name = self.validated_data["first_name"]
        last_name = self.validated_data["last_name"]
        username = self.validated_data["username"]
        email = self.validated_data["email"]
        password = self.validated_data["password"]
        confirm_password = self.validated_data["confirm_password"]

        if password != confirm_password:
            raise serializers.ValidationError({"error": "Password Doesn't Match "})

        if User.objects.filter(email=email).exists():
            raise serializers.ValidationError({"Error": "Email Already Exist"})

        account = User(
            first_name=first_name,
            last_name=last_name,
            username=username,
            email=email,
        )
        account.set_password(password)
        print(account)
        account.is_active = False
        account.save()
        return account


class UserLoginSerializer(serializers.Serializer):
    username = serializers.CharField(required=True)
    password = serializers.CharField(required=True)
