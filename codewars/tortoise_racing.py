def race(v1, v2, g):
    if (v1 >= v2):
        return [-1, -1, -1]
    time = [0, 0, 0]
    speedGap = v2 - v1
    minutesSpeed = speedGap / 60.0
    secondsSpeed = minutesSpeed / 60.0
    #print minutesSpeed, secondsSpeed
    time[0] = g // speedGap
    time[1] = int((g - (time[0] * speedGap)) // minutesSpeed)
    time[2] = int((g - (time[0] * speedGap) - (time[1] * minutesSpeed)) // secondsSpeed)
    return time

ac = race(0, 36, 39)
print ac