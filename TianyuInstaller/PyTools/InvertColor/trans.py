#这份文件提供一个十分简单粗暴的资源反色功能
import os
from PySide2.QtGui import *

def main():
    fileList = os.listdir()
    for i in fileList:
        if ".py" not in i:
            image = QImage(i)
            W = image.width()
            H = image.height()
            for x in range(W):
                for y in range(H):
                    color:QColor = image.pixelColor(x, y)
                    r = 255 - color.red()
                    g = 255 - color.green()
                    b = 255 - color.blue()
                    a = color.alpha()
                    image.setPixel(x, y, qRgba(r, g, b, a))
            image.save(i)
    print(fileList)

main()