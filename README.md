# Project 4 - Project Torbjörn #

## Team ##
Lucas Anderson <br />
Thomas Andersen <br />
Matthew Williams

## rules ##
<p>For this project you will make a sentry gun that will locate a target and shoot a projectile at it.</p>

<p>Minimum specs for 100%:</p>
1. It can rotate up to 180 degrees, detect a stationary target within the firing arc, and shoot it.
2. Autonomous mode (you turn it on, it will engage seek and destroy mode automatically)
3. It must fire a bouncy ball or something equally cool (a miniature harpoon, a ping pong ball, etc.)
4. Accurate: it should strike the center of mass on the target, or as close as possible to the center
5. Distance: It should be able to detect and hit targets between 1m and 5m (the effective range of <span>[our ultrasound sensors](https://www.sunfounder.com/learn/sensor-kit-v2-0-for-raspberry-pi-b-plus/lesson-25-ultrasonic-ranging-module-sensor-kit-v2-0-for-b-plus.html)</span>). This is a change from what I said in class (I was thinking of a different sensor off the top of my head).

Bonus points will be given for areas where you do significantly better than the expectation. For example, if you make it walk around, or shoot larger objects or strike targets further away.

You will lose points if you only partially complete an objective, like controlling the sentry gun with a remote control instead of programming it to be autonomous.

You have already been assigned into groups of three. If you do not have a group, come talk to me. On Canvas, make sure you register yourself into a group (in "Sentry Groups").

The core programming for this assignment <strong>must be done in assembly</strong>. You're welcome to call C or C++ libraries to interface with the sensors or to handle data structures.

- - - -
# project proposal #

## sensors ##
[Relay](https://www.sunfounder.com/learn/sensor-kit-v2-0-for-raspberry-pi-b-plus/lesson-4-relay-module-sensor-kit-v2-0-for-b-plus.html) <br />
[Ultrasonic Ranging Module](https://www.sunfounder.com/learn/sensor-kit-v2-0-for-raspberry-pi-b-plus/lesson-25-ultrasonic-ranging-module-sensor-kit-v2-0-for-b-plus.html) <br />
[Servo Motors](#)
[DC Motors](#)

### sensor one ###
gpio 17 - pinone
### sensor two ###
gpio 27 - pintwo
### sensor three ###
gpio 22 - pinthree

## responsibilities ##
Construct Launcher - Thomas Andersen <br />
Report - Team <br />
Programming - Lucas Anderson <br />
Pin mapping in memory - Matthew Williams

- - - -
# compile and run code #
run code: <br />
```
make
sudo ./project.o
```
