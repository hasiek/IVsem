from datetime import datetime
from datetime import timedelta

now = datetime.now()

print "You can wake up at:"

for x in range (1, 6):
	
	now += timedelta(hours = 1, minutes = 30)
	
	if (now.minute >= 10):
		print str(now.hour) + ':' + str(now.minute)
	else:
		print str(now.hour) + ":0" + str(now.minute)
			
	
