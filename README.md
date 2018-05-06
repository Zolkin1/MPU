# MPU9250

This repository comes from a few different source files created by [Kris Winer](https://github.com/kriswiner) 
to support the MPU9250 9-DOF Internal Measurement Unit.  

Here's what I changed:
* Reorganized Kris's
[source code](https://github.com/kriswiner/MPU9250/tree/master/MPU9250_BME280_SPIFlash_Ladybug) 
into the modern Arduino library [format](https://github.com/arduino/arduino/wiki/arduino-ide-1.5:-library-specification)
* Added support for RaspberryPi via [WiringPi](http://wiringpi.com/)
* Simplified the 
[examples](https://github.com/kriswiner/MPU9250/blob/master/MPU9250_BME280_SPIFlash_Ladybug/MPU9250_BME280_SPIFlash_Ladybug.ino) 
by removing code requiring components other than the MPU9250

The MPU9250 supports communication via the I<sup>2</sup>C bus or the SPI bus.  With I<sup>2</sup>C you can run the
MPU9250 in &ldquo;master mode&rdquo;, meaning that you access both sensors
(MPU6500 accelerometer/gyrometer, AK8963 magnetometer) at once, or in &ldquo;pass-through
mode&rdquo; allowing you to communicate directly with the magnetometer for more efficient data acquisition.  
With the SPI bus you get only master mode.

I have tested this library on the following hardware:

* [Butterfly STM32L433](https://www.tindie.com/products/TleraCorp/butterfly-stm32l433-development-board/) 
development board, I<sup>2</sup>C

* Raspberry Pi 3, I<sup>2</sup>C

* Raspberry Pi Zero with [PXFMini](http://erlerobotics.com/blog/product/pxfmini/) autopilot shield, SPI 

Arduino users can just clone this repository into their Arduino libraries folder, the run the examples in the
usual way (<b>File</b> / <b>Examples</b> / <b>MPU9250</b>).  RaspberryPi users should download and install
[WiringPi](http://wiringpi.com/), then cd to one of the example folders in 
<b>MPU9250/extras/WiringPi/examples</b>, and type <b>make run</b>.
