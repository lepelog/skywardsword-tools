          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Verehrte Phai! Ihr habt mich gerufen?\n\n\n\nDiesen Knilch hier soll ich also\nwegbringen?")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "Verstanden! Ich warte dann oben auf\nEuch! Bis später!")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Ich schlage vor, dass du zurück ins\nWolkenmeer reist und den Kyu zu\njener Person bringst, die dich mit\nder Suche beauftragt hat.")
/*< 23>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*< 13>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = true;
/*< 24>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 25>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 26>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 27>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 29>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 30>*/ 	story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */] = true;
/*< 34>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_251_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Du bist mir im Weg, grüner Wicht!\nLos, mach die Fliege, aber hurtig!")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Die Wahrscheinlichkeit, dass es sich\nhierbei um eine Pflanze handelt, liegt\nnur bei 40 %.\n\nIch halte es jedoch für möglich, dass\n<color blue<Otus>coloroff> dieses Wesen als neue Pflanzenart\nanerkennt.\n\nSoll ich den Roboter rufen und es in\nden Wolkenhort bringen lassen?\n[1-]Ja[2]Nein")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Ich werde den\nRoboter nun rufen.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Solltest du deine\nMeinung ändern, untersuche dieses\nWesen ein weiteres Mal.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00070014>Du sagst, dass du <color blue<Kombu>coloroff> mitnimmst\nund plötzlich sagst du Nein und lässt\nKombu einfach hier? Ganz allein?\n\n<0x10009:0x00090013>Kombu wird wohl nie ein ruhiges und\nfriedliches Leben führen können...")
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00070004>Aber beim nächsten Mal nimmst du\n<color blue<Kombu>coloroff> mit, oder?\n\n\n<0x10009:0x00000001>Bitte!")
          	  case 1:
/*< 36>*/ 		switch (zone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00070003>Nimm <color blue<Kombu>coloroff> mit an einen Ort, wo\nKombu in Ruhe und Frieden leben\nkann, ohne Angst und ohne Gefahr!\n\n<0x10009:0x00000001>Bitte!")
          		  case 1:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000001>Oh, du bist es wieder! <color blue<Kombus>coloroff> kleine\nSchultern tun weh vom Verstecken!\n[1-]Welche\nSchultern?[2-]Armes Ding!")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090014>So eine Frechheit! Auch wenn Kombus\nSchultern nicht stark und kräftig sind,\nhat Kombu trotzdem welche!\n\n<0x10009:0x00070011>Aber <color blue<Kombu>coloroff> ist schon ganz müde vom\nständigen Verstecken. Das Leben hier\nist viel zu gefährlich!")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00090013>Alle freuen sich darüber, dass der Wald\nfriedlich geworden ist, aber Kombu\nglaubt das irgendwie nicht.\n\n<0x10009:0x00070004>Muss <color blue<Kombu>coloroff> sich sein Leben lang\nimmer nur verstecken?")
          					flw_19:
/*< 19>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090005>Kennst du irgendeinen Ort, an dem\n<color blue<Kombu>coloroff> leben kann, ohne sich immer\nverstecken zu müssen?\n[1-]Oh ja![2-]Natürlich!")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00060007>Das ist ja wundertoll! Nimm <color blue<Kombu>coloroff>\nmit, sofort!")
/*< 35>*/ 						zone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00090013>Es gibt bestimmt immer noch viele\nFieslinge überall.\n\n\n<0x10009:0x00070004>Das Leben der Kyu ist ein Leben in\nAngst. Das wird sich niemals ändern.")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070011>Ja... Das Leben in ständiger Gefahr\nmacht <color blue<Kombu>coloroff> müde. Du kannst das\nwohl nicht verstehen...")
          				goto flw_38
          			}
          		}
          	}
          }

