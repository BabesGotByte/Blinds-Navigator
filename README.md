## Introduction
___
This device contains an arduino, an ultrasonic sensor, an switch and a buzzer. It simply aims to help blind people. A person who can't see ,can feel safer with the help of our gadget. The principle of this gadget is simple.The closer the person is from an object,the louder will the buzzer of the gadget ring. In this way, it helps them avoid collision with anything and hence avoiding accidents. This way our gadget paves way for the blind people of our society to become more independent as one of the main factors that make a blind person dependent is their inability to see their surroundings which makes them so much accident prone. Our gadget is one of the technologies for this new era that will help people feel more equal and confident by helping them overcome their liabilities.Because we believe that every person has the right to dream freely and also feel confident about achieving them.




![12](https://user-images.githubusercontent.com/37226108/37238953-52b094e4-2457-11e8-9e69-9b55cd639a53.png)



## How this device works-
___
In sensors we are having a triggered and an echo pin. We will connect those pins to the arduino at a particular number {provided at the start of the coding). By this we can calculate the distance between an object and a person by sending out a sound wave at a specific frequency and listening for that sound wave to bounce back.Since it is known that the speed of sound is 320m/s ,so we can take the time for the sound to return and multipy it by 0.032cm/(microsec) for the total trip. Total distance travel means that the sund wave traveled 2 times the distance to the object. So to find the distance to the object, simply divide the total distance by by 2. if distance is less than 1m ,one small beep and 4 big beeps ring(small beep means sound that rings for lesser time ). As distance keeps increasing by each meter, number of small beeps increase and big beeps decrease

![img_20180310_114205](https://user-images.githubusercontent.com/37226108/37238991-8633e856-2458-11e8-895b-1562a6721dda.jpg)

