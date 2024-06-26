# Generated by Django 5.0.6 on 2024-06-02 10:47

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('Author', '0001_initial'),
        ('Category', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='PostsModel',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('title', models.CharField(max_length=100)),
                ('subtitle', models.CharField(max_length=200)),
                ('content', models.TextField()),
                ('author', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='Author.authormodel')),
                ('category', models.ManyToManyField(to='Category.categorymodel')),
            ],
        ),
    ]
