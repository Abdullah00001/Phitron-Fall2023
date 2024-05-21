class Phone:
    Model = 'Redmi 9A'
    Color = 'Blue'
    Brand = 'Xiaomi'
    Features = ['Camera','Speaker','Face Recognization']
    def massage(self, number,sms):
        text = f"From:{number}\n\nmassage:{sms}"
        return text



myPhone=Phone()

print(myPhone.massage(1937868838,'habibi kaifa aluka'))