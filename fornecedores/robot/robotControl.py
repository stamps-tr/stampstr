#!/usr/bin/env python3
# so that script can be run from Brickman

import termios, tty, sys
from ev3dev.ev3 import *

# attach large motors to ports B and C, medium motor to port A
motor_left = LargeMotor('outB')
motor_right = LargeMotor('outC')
motor_a = MediumMotor('outA')
spd = 450

def inc(sped):
   if sped<=900:
      sped+=50
   return sped

def dec(sped):
   if sped>50:
      sped-=50
   return sped

#==============================================


def getch():
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    tty.setcbreak(fd)
    ch = sys.stdin.read(1)
    termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

    return ch

#==============================================

def fire():
   motor_a.run_timed(time_sp=3000, speed_sp=600)

#==============================================

def forward():
   motor_left.run_forever(speed_sp=spd)
   motor_right.run_forever(speed_sp=spd)

#==============================================

def back():
   motor_left.run_forever(speed_sp=-spd)
   motor_right.run_forever(speed_sp=-spd)

#==============================================

def left():

   motor_left.run_forever(speed_sp=-spd)
   motor_right.run_forever(speed_sp=spd)

#==============================================

def right():
   motor_left.run_forever(speed_sp=spd)
   motor_right.run_forever(speed_sp=-spd)

#==============================================

def stop():
   motor_left.run_forever(speed_sp=0)
   motor_right.run_forever(speed_sp=0)

#==============================================

def sound():
   Sound.set_volume(100)
   #Sound.play('./oh-ah.wav')
   Sound.speak('Hello I am Watson, I am here to help you').wait()

while True:
   k = getch()
   print(k)
   if k == 'w':
      forward()
   if k == 's':
      back()
   if k == 'a':
      left()
   if k == 'd':
      right()
   if k == 'f':
      fire()
   if k == ' ':
      stop()
   if k == 'q':
      exit()
   if k == 'm':
      sound()
   if k == 't':
      spd = inc(spd)
   if k == 'g':
      spd = dec(spd)