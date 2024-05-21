import pyautogui
from time import sleep
""" pyautogui.write('hello world',interval=1)  """

""" pyautogui.alert('atitue is low') """

""" distance=200
while distance > 0:
        pyautogui.drag(distance, 0, duration=0.5)   # move right
        distance -= 5
        pyautogui.drag(0, distance, duration=0.5)   # move down
        pyautogui.drag(-distance, 0, duration=0.5)  # move left
        distance -= 5
        pyautogui.drag(0, -distance, duration=0.5) """
        
""" sleep(5)
for i in range(0,5):
    if i==3:
        sleep(5)
        continue
    else:
        pyautogui.write('Youre Low') """

for i in range(0,5):
    sleep(5)
    pyautogui.write('KI he botso valo acho')
    pyautogui.press('enter')