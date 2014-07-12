#!/usr/bin/env python
import subprocess


def is_number(s):
    # Source: http://stackoverflow.com/questions/354038/
    #         how-do-i-check-if-a-string-is-a-number-in-python
    try:
        float(s)
        return True
    except ValueError:
        return False


def main():
    # Determine the average unit test running time through brute force
    filename = "_temp_v42.txt"  # Doubt I'll see this file name in exercism
    runcmd = "go test -bench=. -benchmem >> " + filename

    for i in range(100):
        subprocess.call(runcmd, shell=True)  # unsafe

    f = open(filename, "r")
    lines = f.readlines()
    f.close

    count = 0
    total = 0.0
    print "Golang unit test run times:\n"

    for line in lines:
        segments = line.split()
        for segment in segments:
            if len(segment) > 2 and is_number(segment[:-1]):
                # So far, this has been the running time
                print segment
                count += 1
                total += float(segment[:-1])

    print "\nAvg time:" + str(total/count) + "s from " + str(count) + " runs."

if __name__ == "__main__":
    main()
