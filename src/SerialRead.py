##import serial

##arduino = serial.Serial("/dev/ttyACM0", 115200, timeout=.1)
print "Write your file name:"
name = input()
x = open(name, "w+")
##while True:
##	data = arduino.readline()[:-2]
	##if data:
		##print data
