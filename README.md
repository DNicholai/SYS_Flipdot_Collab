# SYS_Flipdot_Collab
![Screenshot of a comment on a GitHub image flipdog.](https://github.com/DNicholai/SYS_Flipdot_Collab/blob/main/Assets/flipdot.jpg)

Collaboration page for reverse engineering a trove of Duhampel Flipdot displays

## To do list
- [x] Document individual Module Components circuitry (as documented [here](Assets/Schematic_Module-pastille_2025-06-01_VVA.pdf), thanks to VVA!)
- [x] Document  individual Module 3D characteristics (as documented [here](Assets/FlipDot_Module-Simplified_Interface_Drawing_DPE.pdf), thanks to DPE)
- [x] Select Module to Module Connector, See Ref 1 below
- [ ] Select, test, and implement Power-Supply (must supply +12V and -12V)
- [x] Select, test, and implement **individual** flipdot **SET** control chipset / componentry
  - [ ] [ ULN2003A 7xNPN Darlington Array]([https://www.ti.com/lit/ds/symlink/sn754410.pdf](https://www.ti.com/lit/gpn/ULN2003A)) - purchased, not yet tested
- [ ] Select, test, and implement **full line** flipdot **RESET** control chipset / componentry - may pull up to ~16A at 12V!!
- [ ] Select, test and implement Microcontroller (leaning towards ESP32 Dev based solution, but open to suggestions)
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
| 2 |  ~ULN2003A high-voltage, high-current NPN Darlington transistor pairs~ | Rejected, NOT viable | ~[InfoElec - based in FR](https://www.infoelec-shop.fr/accueil/1838-uln2003a.html) - 0,7€ each & 4€ shipping~ | Yes |
| 2b |  IRL540N MOSFET - Logic-level input capable of controlling 36A @ A0V | Selected, NOT tested | [Aliexpress](https://fr.aliexpress.com/item/1005007681770350.html?spm=a2g0o.order_detail.order_detail_item.4.6a51f19clIqdwJ&gatewayAdapt=glo2fra)] - 1,4€ for 10x & nominal shipping | Yes |
