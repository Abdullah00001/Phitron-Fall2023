# Generated by Django 5.0.6 on 2024-06-11 12:27

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('posts', '0001_initial'),
    ]

    operations = [
        migrations.AddField(
            model_name='postmodel',
            name='post_img',
            field=models.ImageField(blank=True, null=True, upload_to='media/uploads/'),
        ),
    ]
