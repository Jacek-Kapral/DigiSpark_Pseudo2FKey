# DigiSpark Hardware Password Key
### A very simple, hardware password key for people who don't want to remember their password manager credentials ;)

Some time ago I bought myself some electronics to experiment with, having in mind a few simple projects,
like moisture meter for inhouse plants, door peephole camera and others. 
One of those gizmos was a small microcontroller - Digistump DigiSpark ATTiny85, for which I initially had
something other in mind (I'm going to describe that later), but came up with an idea that would make 
the "digital" part of my girlfriend's life easier and tad bit safer. She's not really convinced to use 
a password manager because of long and complicated password needed to unlock the database (which frankly 
was my suggestion).

My project basically comes down to this:

(placeholder)

It's an usb dongle with three buttons, that - when pressed - input a string of characters assigned
to given button, with intention of filling the "Master password" field of Keepass or other password
manager, every button triggering different string.

---
> [!WARNING]
> I'll point the obvious right away: This is not a secure solution and is intended to use at home.
> I'm very aware that passwords are **not** stored in a secure way, besides, using the thingy reveals stored
> passwords. 
> The idea is to *lessen the burden* of using password manager secured with complicated password.
> If You loose this thing somewhere in public, consider Your password / database compromised,
> even though without proper context it is not very useful.
---

### Assembly and set up:

At some point Digispark microcontroller was well supported, with Digistump website containing all
the required drivers, libraries and instructions needed to set up. Unfortunatelly, the support
was dropped and now even the Digistump website is gone, with only Github repository still
being online, though with outdated info and links that are not working.

So the setup (at least on Windoze) is a bit troublesome with some erratic behaviour at one moment,
in my opinion it's not that worth of a hassle, especially with that kind of projects.
On the other hand, there aren't many microcontroller development boards with usb plug on board, 
most of them have either micro usb or usb-c port.
 
That usb plug makes a world of difference in one particular project.


**Let's start with things we'll need:**

Obviously, a Digispark development board:

![Picture of Digispark board](/pics/a001_digisparkboard.png)

Three 10 kOhm resistors:

![Picture of 10kohm resistors](/pics/a002_resistors.png)

Three microswitches:

![Picture of microswitches box](/pics/a004_switches.png)

Wires - i got mine from decomissioned printer, whatever is easy to solder:

![Picture of wires](/pics/a003_wires.png)

This is the schematic of how You should solder all elements together:

![Picture of schematic](/pics/a000_schematic.png)

And here's mine soldered:

![Picture of soldered elements](/pics/a005_soldered.png)

**Now, for the programming part:**

In Arduino IDE go to "File", then "Preferences", and in "Additional boards manager URLs":

![Screenshot with Arduino IDE preferences](/pics/0002_digisparkkey.png)

paste this link: https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json

Then go to  Boards Manager (Ctrl-Shift-B) or Tools -> Board -> Boards Manager
and look for "Digistump [...]":

![Screenshot with Boards Manager](/pics/0005_digisparkkey.png)

and install the library.

Next You'll need the drivers (in my case, while downloading the library the IDE tried to install the drivers, but failed),
You can get them here: https://forum.arduino.cc/uploads/short-url/cMw5fnHVHxqVfOCBJE1XT6CYvcb.zip
(BTW: Link to the whole thread about Digispark being abandoned: https://forum.arduino.cc/t/digistump-digispark-no-longer-available/1234095/6)
After downloading and unpacking, install appropriate version: - DPinst for 32 bit system and DPinst64 for 64 bit.

![Screenshot with Drivers](/pics/0008_digisparkkey.png)

Now, in Arduino IDE choose the adequate board (Tools -> Board -> Digistump AVR Boards -> Digispark (Default - 16.5mhz):

![Screenshot with board selection](/pics/0006_digisparkkey.png)

Connect the Digispark to USB port and You're **theoretically** ready to program Your microcontroller. 
I say "theoretically" because I've stumbled upon a problem that was quite strange, but turns out not
that uncommon - OS pinged with that well known sound of usb device being plugged, and after three
or so seconds it played the unplug sound, and like that in a loop. 
Turns out some of those Digispark boards don't have bootloader installed as a default, so if the board appears
in Your Device Manager:

![Screenshot with board driver present in Device Manager](/pics/0007_digisparkkey.png)

Just copy the code to Your Arduino IDE and upload it to the board. 
In my case, after the program was compiled and uploaded, operating system recognized the board
as a "DigiKey" input device. 



It can also act as a "Poor Man's Rubber Ducky"