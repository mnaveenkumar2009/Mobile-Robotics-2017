import time
import numpy as np
import cv2
import math
x = int(input("where do u want to place brave ?\n"))
I = cv2.imread("../data/brave.jpg")

# her arrow: x 172,y 150     deer head: x 379 y 185
#cv2.imshow('Image', I)
I2 = cv2.imread("../data/deer.jpg")

rows,cols,channels = I.shape
roi = I2[120:rows+120 ,x:cols+x]
Igray = cv2.cvtColor(I,cv2.COLOR_BGR2GRAY)

#cv2.imshow('Image',Igray)
ret, mask = cv2.threshold(Igray,220,255,cv2.THRESH_BINARY_INV)
#cv2.imshow('Image',mask)
mask_inv = cv2.bitwise_not(mask)
#cv2.imshow('Image',mask_inv)

img1 = cv2.bitwise_and(roi, roi , mask = mask_inv)
img2 = cv2.bitwise_and(I, I , mask = mask)
dst = cv2.add(img1,img2)
I2[120:rows +120,x:cols+x] = dst

cv2.line(I2 ,(x+172,270),(379,185) , (255,0,0),5)
font = cv2.FONT_HERSHEY_SIMPLEX
dist = math.sqrt( 7225 + ((207-x)*(207-x)) )
if x>=207 :
    s="brave is in front of deer"
else :
    if dist>=150 :
        s="brave is too far from deer"
    else :
        s="brave takes the shot"
cv2.putText(I2, s,(0,30),font,1,(200,100,0),3,cv2.LINE_AA)
cv2.imshow('sd',I2)
cv2.waitKey(0)
cv2.destroyAllWindows()


#source images : brave.jpg , deer.jpg
#final images : far.png , infron.png , notfar.png
