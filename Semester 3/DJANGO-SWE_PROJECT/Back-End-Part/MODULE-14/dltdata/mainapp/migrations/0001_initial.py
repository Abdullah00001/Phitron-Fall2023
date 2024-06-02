# Generated by Django 5.0.6 on 2024-06-01 05:30

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Users',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('userName', models.CharField(max_length=30)),
                ('userEmail', models.CharField(max_length=50)),
                ('userAddress', models.EmailField(max_length=254)),
                ('postTitle', models.CharField(max_length=50)),
                ('userPost', models.TextField(max_length=1000)),
                ('usersID', models.IntegerField(default='null')),
            ],
        ),
    ]
