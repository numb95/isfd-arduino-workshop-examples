import serial
import time
 
s = serial.Serial('/dev/ttyACM0', 9600) #port is 11 (for COM12), and baud rate is 9600
time.sleep(2)    #wait for the Serial to initialize
s.write('Ready...')
while True:
    str = input('Enter text: ')
   # str = str.strip()
    if str == 'exit' :
        break
    s.write(str)
