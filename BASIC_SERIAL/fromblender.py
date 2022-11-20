import serial


ser = serial.Serial('COM7', '9600')
ser.write(b'Hi Nano\n')
print(ser.readline())

ser.close()