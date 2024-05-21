""" with open('readme.md','w') as file:
    file.write('this repository is all about pythos data structure') """

with open('readme.md','r') as file:
    text=file.read()
    print(text)

with open('readme.md','a') as file:
    file.write('and the about more advanced things')

with open('readme.md','r') as file:
    text=file.read()
    print(text)