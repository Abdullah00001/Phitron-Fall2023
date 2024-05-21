import pyautogui
from time import sleep

N=int(input())

sleep(5)
print(N)
pyautogui.write(f"{N}")
pyautogui.press('enter')
for i in range(N):
    for j in range(i+1):
        pyautogui.write('#')
    pyautogui.press('enter')