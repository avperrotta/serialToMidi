# serialToMidi
A simple serial to Midi application for using with Arduino (and similar) projects.

This simple applications was developed to help using Arduino  based interfaces as generic midi controllers.

When using oficial Arduino boards it is possible to program the board with custom firmaware so that the computer can regonize it as a generic Midi decive. However, for cheap Arduino knock-offs, that uses the CH340 chips and drivers, this is not possible. Therefore, this simple application is a workaround, that converts incoming serial data from the board into Midi data inside the computer.

If you have oficial Arduino board and want to transform it into a "real" midi device, check out this projects:
https://github.com/kuwatay/mocolufa
https://github.com/ddiakopoulos/hiduino

This app was testes in Windows10 64bit


Developed by André Perrotta
@EA-UCP
Porto, 2019

www.avperrotta.org

www.artes.porto.ucp.pt


