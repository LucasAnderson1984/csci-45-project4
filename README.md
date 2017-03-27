# Project 4 - Project Torbjörn #

## Team ##
Lucas Anderson <br />
Thomas Andersen <br />
Matthew Williams

## Rules ##
<p>For this project you will make a sentry gun that will locate a target and shoot a projectile at it.</p>

<p>Minimum specs for 100%:</p>
1. It can rotate up to 180 degrees, detect a stationary target within the firing arc, and shoot it <br />
2. Autonomous mode (you turn it on, it will engage seek and destroy mode automatically) <br />
3. It must fire a bouncy ball or something equally cool (a miniature harpoon, a ping pong ball, etc.) <br />
4. Accurate: it should strike the center of mass on the target, or as close as possible to the center <br />
5. Distance: It should be able to detect and hit targets between 1m and 5m (the effective range of
  [our ultrasound sensors](https://www.sunfounder.com/learn/sensor-kit-v2-0-for-raspberry-pi-b-plus/lesson-25-ultrasonic-ranging-module-sensor-kit-v2-0-for-b-plus.html)
). This is a change from what I said in class (I was thinking of a different sensor off the top of my head) <br />

Bonus points will be given for areas where you do significantly better than the expectation. For example, if you make it walk around, or shoot larger objects or strike targets further away.

You will lose points if you only partially complete an objective, like controlling the sentry gun with a remote control instead of programming it to be autonomous.

You have already been assigned into groups of three. If you do not have a group, come talk to me. On Canvas, make sure you register yourself into a group (in "Sentry Groups").

The core programming for this assignment <strong>must be done in assembly</strong>. You're welcome to call C or C++ libraries to interface with the sensors or to handle data structures.

- - - -
# Project Proposal #

## Sensors ##
[Relay](https://www.sunfounder.com/learn/sensor-kit-v2-0-for-raspberry-pi-b-plus/lesson-4-relay-module-sensor-kit-v2-0-for-b-plus.html) <br />
[Ultrasonic Ranging Module](https://www.sunfounder.com/learn/sensor-kit-v2-0-for-raspberry-pi-b-plus/lesson-25-ultrasonic-ranging-module-sensor-kit-v2-0-for-b-plus.html) <br />
[Servo Motors](#)

### Relay 1 ###
gpio 21 - pinone
### Relay 2 ###
gpio 20 - pinone
### Relay 3 ###
gpio 16 - pinone
### Relay 4 ###
gpio 12 - pinone
### Servo Motor ###
gpio 22 - pinone
### Ultrasonic 1 ###
gpio 17 - ECHOPIN <br />
gpio 27 - TRIGPIN
### Ultrasonic 2 ###
gpio 23 - ECHOPIN <br />
gpio 24 - TRIGPIN

## Responsibilities ##
Construct Launcher - Thomas Andersen <br />
Report - Team <br />
Programming - Lucas Anderson <br />
Pin mapping in memory - Matthew Williams

- - - -
# Compile and Run Code #
run code: <br />
```
make
sudo ./project.o
```
