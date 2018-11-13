## Calender Event with ESP8266, Arduino, Adafruit and IFTTT

# 1. Introduction

This tutorial will teach you how to connect your ESP8266 to Adafruit to read out your data online. This data will then be used to automatically create a google calendar event using IFTTT. The data that we will be using is from a NeoPixel RGB LED strip that we can control online through Adafruit.

## 2. What do I need?

1. An ESP8266, this is a low-cost microchip with built in WiFi:

<img src="https://gloimg.gbtcdn.com/gb/pdm-product-pic/Electronic/2017/06/13/goods-img/1501699031787010991.jpg" alt="ESP8266" width="250px">

2. 3x female to female jumper wires

<img src="https://cdn.sparkfun.com//assets/parts/9/6/1/4/12796-00.jpg" alt="ESP8266" width="250px">

3. Micro USB cable

<img src="https://images-na.ssl-images-amazon.com/images/I/81Ays2GXOPL._SX569_.jpg" alt="ESP8266" width="250px">

4. NeoPixel RGB LED Strip

<img src="https://cdn-shop.adafruit.com/1200x900/2561-00.jpg" alt="ESP8266" width="250px">

## 3. Setting up

### Arduino

For the code of this project we're gonna be using Arduino. This is a free open-source code writing tool that allows us to upload code to our microchip.

You can download it for free here: https://www.arduino.cc/en/Main/Software

### Adafruit

create an account, save your settings go back to https://io.adafruit.com
greeted by dashboard lets go ahead and create your first dashboard.
click on "actions" and then "create new Dashboard
Give it a name of your liking and optionally write a short description
Now on the left hand of the page click on Feeds.
Create a new feed the same way you created your dashboard.
Now go back to dashboards and click on your newly created dashboard
Click on the blue + icon on the top right of the page
Now select the color picker
It will ask you to connect a feed to your color picker, select the feed you just made and press next
After that click on Create Block
When you click on the color picker circle you can now select a color, it won't do anything yet though.
On the top right you can see a little key icon, press that and copy your key somewhere, we will need it later.
We're done for now on Adafruit, make sure to keep a tab open on the dashboard, we will need it soon.

## 4. The Code


https://io.adafruit.com/
