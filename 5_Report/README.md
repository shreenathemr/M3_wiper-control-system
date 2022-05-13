# Abstract
Over the past few years the automotive industry has aggressively researched ways to develop systems for safety, to save humans life. Generally working of a car wiper is based on manual switching. In this case the driver has to switch ON the power button to turn on the wiper. It complicate things because the driver has to concentrate simultaneously on driving and wiper. With drivers exposed to increased distraction, automatic rain sensing wiper system becomes more appealing feature, as they eliminate the risk and distraction to turn on the wiper manually. In this automatic wiper system, a rain sensor, microcontroller and a driver integrated circuit is used to convert manual operation into automatic operation. When water falls on the rain sensor, the sensor sends the signal to the microcontroller and then the microcontroller processes the data and energizes the driver IC to turn on the wiper. With these modifications automatic cleaning of the glass can be done without the involvement of the driver.

# Objective
- To reduce the risk of accidents.
- To automate the wiper mechanism and working in automobiles.
- To reduce the driver’s tasks and allow driver to concentrate on driving.

# Introduction
A windscreen wiper or  windshield wiper  is a  device used  to remove rain and debris from a windscreen.  Almost  all motor  vehicle,  including    trains,    aircraft  and watercraft, are equipped  with  such  wipers,  which  are  usually  an  essential requirement. A wiper generally consists of an arm, pivoting at one end and with a long rubber blade attached to the other.
In  the  present  automobiles  the  number  of  facilities  is much  higher.  The  driver  has  to  concentrate  on  road  while driving,  and   with    increased   traffic,   things   get    frustrating. The features in the car like GPRS to trace the route, music system,  air  condition  system  etc  may  drive  away  the attention  of  the  driver
# Features
- Wiper system which is handy and easy to use
- STM32F407 Controller ARM Cortex -M4 which is faster and contains superior and innovative peripherals
- Pushbutton to turn on ignition as well as to change the speed
- Three LEDs indicating the wiping operation
# SWOT Analysis
## Strength
- Safety for the driver as well as the passengers in the vehicle
- Clear Visibility to the Driver for neat ride.
- Wiper not stop in middle of Window
## Weakness
- The total cost of the wiper system is high if implemented in real-time.
- Required practical implementation
- Blades should be in rubber
## Opportunities
- Rain sensing and automatic operation can be implemented as further enhancement.
- Increase as wiper system is necessary to install.
## Threats
- Replacing the board is not possible if it malfunctions.
- Failure of operation might cause vesion problem while driving.
- Advance technology are replaced
# 4Ws and 1Hs
## Who
- All who wants safety and clean vision in weather conditions.
## What
- Aim is to implement automatic wiper system for vehicles.
## Why
- Curious about intrest in embedded system applications.
## When
- It is recommended to operate during dust or rain.
## How
- Ignition is turned on, the wiper starts its operation along with speed adjustment modes which improves overall operation.
# REQUIREMENTS
## High level requirements
| ID | Description | Status |
| --- | --- | --- | 
| HR_01 | Deactivate wiper system |	Implemented |
| HR_02 |	Wiper ON |	Implemented |
| HR_03 |	Wiper OFF |	Implemented |
| HR_04 |	Wiper Speed Controls |	Implemented |

### Low level requirements:-

|  ID  |             Discription                          |    status   |
|------|--------------------------------------------------|-------------|
|LR_01 | Turn on controller                          | Implemented |
|LR_02 | Button pressed for once - ON LED RED                             | Implemented |
|LR_03 | Button Pressed for two times - OFF LED RED                              | Implemented|
|LR_04 | Turn off LED for long press                  | Implemented |

