from pynput.keyboard import Key, Controller
import pyautogui
import webbrowser
import time

def main():
    webbrowser.open_new_tab('https://github.com/login')
    f = open("date.txt","r")
    screenWidth, screenHeight = pyautogui.size()
    currentMouseX, currentMouseY = pyautogui.position()
    keyboard = Controller()
    time.sleep(5);

    #Username Button
    pyautogui.moveTo(1000, 310)
    time.sleep(1)
    pyautogui.click()
    keyboard.type(f.readline())

    #Password Button
    time.sleep(3)
    pyautogui.moveTo(1000, 470)
    pyautogui.click()
    keyboard.type(f.readline())
    time.sleep(1)

    #Create Git
    webbrowser.open_new_tab('https://github.com/new')
    time.sleep(5)
    pyautogui.moveTo(900, 360)
    pyautogui.click()
    keyboard.type(f.readline())
    time.sleep(3)
    pyautogui.moveTo(900, 480)
    pyautogui.click()
    keyboard.type(f.readline())

if __name__ == "__main__":
    main()
