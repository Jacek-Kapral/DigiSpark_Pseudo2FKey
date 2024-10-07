# DigiSpark Hardware Password Key
### A very simple, hardware password key for people who don't want to remember their password manager credentials ;)

Some time ago I bought myself some electronics to experiment with, having in mind a few simple projects,
like moisture meter for inhouse plants, door peephole camera and others. 
One of those gizmos was a small microcontroller - Digistump DigiSpark ATTiny85, for which I initially had
something other in mind (I'm going to describe that later), but came up with an idea that would make 
the need to use a password manager software my girlfriend's "digital" life easier - and a bit safer - 
since she's not really convinced to use it because of long and complicated password needed to unlock
the database (which frankly was my suggestion).
     
---
> [!WARNING]
> I'll point the obvious right away: This is not a secure solution and is intended to use at home.
> I'm very aware that passwords are __not__ stored in a secure way, besides, using the thingy reveals stored
> passwords. 
> The idea is to *lessen the burden* of using password manager secured with complicated password.
> If You loose this thing somewhere in public, consider Your password / database compromised,
> even though without proper context it is not very useful.
---
     
     
Setting it up:

At some point Digispark microcontroller was well supported, with Digistump website containing all
the required drivers, libraries and instructions needed to set up. Unfortunatelly, the support
was dropped and now even the Digistump website is gone, with only Github repository still
being online, though with outdated info and links that are not working.

So the setup now (at least on Windoze) is a bit troublesome with some erratic behaviour at one moment,
in my opinion it's not that worth of a hassle, especially with that kind of projects.
On the other hand, there aren't many microcontroller development boards with usb plug on board, 
most of them have either micro usb or usb-c port.

Let's start:

In Arduino IDE go to "File", then "Preferences", and in "Additional boards manager URLs":

![Screenshot with Arduino IDE preferences](/screenshots/0002_digisparkkey.png)

paste this link: https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json

Then go to  Boards Manager (Ctrl-Shift-B) or Tools -> Board -> Boards Manager
and look for "Digistump [...]":

![Screenshot with Boards Manager](/screenshots/0005_digisparkkey.png)

and install the library.

It can also act as a "Poor Man's Rubber Ducky"