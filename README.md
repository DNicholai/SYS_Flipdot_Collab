# SYS_Flipdot_Collab
![Screenshot of a comment on a GitHub image flipdog.](https://github.com/DNicholai/SYS_Flipdot_Collab/blob/main/Assets/flipdot.jpg)

Collaboration page for reverse engineering a trove of Duhampel Flipdot displays

## To do list
- [x] Document individual Module Components circuitry (as documented [here](Assets/Schematic_Module-pastille_2025-06-01_VVA.pdf), thanks to VVA!)
- [x] Document  individual Module 3D characteristics (as documented [here](Assets/Assets/FlipDot_Module-Simplified_Interface_Drawing_DPE.pdf), thanks to DPE)
- [x] Select Module to Module Connector, See Ref 1 below
- [ ] Select, test, and prove Power-Supply (must supply +12V and -12V)
- [ ] Select, test, and prove **individua**l flipdot **SET** control chipset / componentry
  - [ ] [SN754410 Quadruple Half-H Driver](https://www.ti.com/lit/ds/symlink/sn754410.pdf) ??
- [ ] Select, test, and prove **full line** flipdot **RESET** control chipset / componentry - may pull ~16A at -12V
- [ ] Select, test and prove Microcontroller (leaning towards ESP32 Dev based solution, but open to suggestions)
- [ ] Develop control library for microcontroller 
- [ ] Prove daisy-chaining of modules and the principals
- [ ] Complete Prototype with Surface Mount Components on Protoboard
- [ ] Transform Surface Mount solution Custom Circuit Board
- [ ] Mechanical & surface mounting integration for wife approval process
- [ ] Add delight to the experience when all tasks are complete :tada:

## Bill of Materials / Shopping List
| Ref | Description | Maturity | Source | Protoboard Compatible |
| --- | --- | --- | --- | --- |
| 1 | 2.54mm 2x17 Pin 34 Pin Straight Male Shrouded PCB Box header IDC Socket | Selected, tested | [Aliexpress](https://fr.aliexpress.com/item/1005002763733694.html?spm=a2g0o.order_list.order_list_main.11.3d971802Kre3jq&gatewayAdapt=glo2fra) - 4,5€ shipped for 10x  | Yes |
| 2 | Other confirmed components to follow shortly... |

