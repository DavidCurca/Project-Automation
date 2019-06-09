from pynput.keyboard import Key, Controller
import pyautogui
import webbrowser
import time
import os

def main():
    chrome_path = 'C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s'
    webbrowser.get(chrome_path).open('https://github.com/login')
    f = open("C:/Users/Admin/source/repos/ProjectAutomation/Debug/date.txt","r")
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
    webbrowser.get(chrome_path).open('https://github.com/new')
    time.sleep(5)
    pyautogui.moveTo(900, 360)
    pyautogui.click()
    folder = f.readline()
    keyboard.type(folder)
    time.sleep(3)
    pyautogui.moveTo(900, 480)
    pyautogui.click()
    keyboard.type(f.readline())


    #Git Init
    file = ""
    path = "C:/Users/Admin/Desktop/"
    for i in range(len(folder)):
        if(folder[i] != '\n'):
            file = file + folder[i]
            path = path + folder[i]
    path = path + "/date.txt"
    print(path)
    
if __name__ == "__main__":
    main()
