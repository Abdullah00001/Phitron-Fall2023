# Generated by Django 5.0.6 on 2024-06-07 15:56

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('Posts', '0001_initial'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='postsmodel',
            name='author',
        ),
    ]
