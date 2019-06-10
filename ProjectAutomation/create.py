from pynput.keyboard import Key, Controller
import pyautogui
import webbrowser
import subprocess
import time
import os

def main():
    chrome_path = 'C:/Program Files (x86)/Google/Chrome/Application/chrome.exe %s'
    webbrowser.open('https://github.com/login')
    f = open("C:/Users/Admin/source/repos/ProjectAutomation/Debug/date.txt","r")
    screenWidth, screenHeight = pyautogui.size()
    currentMouseX, currentMouseY = pyautogui.position()
    keyboard = Controller()
    time.sleep(5);

    #Username Button
    pyautogui.moveTo(1000, 310)
    time.sleep(2)
    pyautogui.click()
    username = f.readline()
    keyboard.type(username)

    #Password Button
    time.sleep(3)
    pyautogui.moveTo(1000, 470)
    pyautogui.click()
    keyboard.type(f.readline())
    time.sleep(2)

    #Create Git
    webbrowser.open('https://github.com/new')
    time.sleep(5)
    pyautogui.moveTo(900, 360)
    pyautogui.click()
    time.sleep(4)
    folder = f.readline()
    print(folder)
    keyboard.type(folder)
    time.sleep(4)
    pyautogui.moveTo(900, 485)
    pyautogui.click()
    keyboard.type(f.readline())


    #Git Init
    time.sleep(6)
    file = ""
    real = ""
    for i in range(len(folder)):
        if(folder[i] != '\n'):
            file = file + folder[i]
    for i in range(len(username)):
        if(username[i] != '\n'):
            real = real + username[i]
    print(os.system("mkdir " + file))
    fo = open("data.sh", "w+")
    fo.write("mkdir " + file + " \n")
    fo.write("cd " + file + "/ \n")
    fo.write("touch README.md \n")
    fo.write("echo \"# " + file + "\" >> README.md \n")
    fo.write("git init \n")
    fo.write("git add README.md \n")
    fo.write("git commit -m \"first commit\" \n")
    fo.write("git remote add origin https://github.com/" + real + "/" + file + ".git \n")
    fo.write("git push -u origin master")
    subprocess.call('file.py', shell=True) 

if __name__ == "__main__":
    main()
