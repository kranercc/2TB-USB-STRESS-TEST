import os
import time

while True:
    time.sleep(5)
    a =os.path.getsize("date.txt")
    mb = a/1000000
    print("Date.txt size: %s bytes" %a)
    print("Date size: %.5f mb\n" % mb)
