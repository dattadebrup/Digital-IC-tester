# Digital-IC-tester
This project is a part of my 2nd Year semester project.In this project we implemented the functionalities of a traditional IC tester present in Electronics laboratory digitally into an Arduino Mega board for digital ICs.The Arduino tests whether the IC is in working condition or not.
We are successfully able to test and implement the functionalities of the following ICs:
    
    -IC7400();//**7403**quad two input nand gate
    -IC7401();//quad two input nand gate but different pins
    -IC7402();//quad two input nor gate
    -IC7404();//**7405**hex inverter
    -IC7408();//**7409**quad two input and gate
    -IC7410();//**7412**tri three input nand gate
    -IC7411();//**7415**tri three input and gate
    -IC7420();//**7422**twice four input nand gate
    -IC7421();//twice four input and gate
    -IC7427();//tri three input nor gate
    -IC7430();//eight input nandgate
    -IC7432();//quad two input or gate
    -IC7436();//quad two input nor gate
    -IC7442();//active low BCD to Decimal decoder
    -IC7450();//dual 2-wide 2-input AND-OR-invert gate (one gate expandable)
    -IC7473();//dual positive edge triggered J-K flip-flop with clear
    -IC7474();//dual D positive edge triggered flip-flop with preset and clear
    -IC7475();//4 bit bistable latch 16 pin IC
    -IC7476();//dual jk flipflop with preset and clear
    -IC7477();//4 bit bistable Latch 14 pin IC
    -IC7486();//quad 2-input XOR gate
    -IC4072();//Dual 4-input OR gate
    -IC4000();//Dual 3-input NOR gate + 1 Inverter
    -IC4002();//Dual 4-input NOR gate
    -IC4001();//Quad 2-input NOR gate
    -IC4012();//Dual 4-input NAND gate
    -IC4013();//Dual D-type flip-flop
    -IC4069();//Hex inverter
    -IC4023();//Triple 3-input NAND gate
    -IC4025();//Triple 3-input NOR gate
    -IC4027();//Dual JK flip-flop
The IC to be tested is to be inserted in the the IC socket which in turn is connected to the Ardunino board and the resulting IC number is displayed in the LCD display connected to the Arduino if the IC works properly otherwise it will mention that the IC is malfunctioned.
