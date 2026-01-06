          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "Jetzt, wo der Wahrsager wieder da ist,\nsprüht der Basar wieder vor Leben!\nDer Kerl ist einfach zu ulkig!")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "Also hat sich unser lieber Wahrsager\ntatsächlich in seinem Haus verkrochen.\n\n\nWenn doch nur jemand für ihn eine\nneue Kristallkugel auftreiben würde...")
          				  case 1:
/*<128>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "Ich glaube, sein Haus steht irgendwo\n<color red<im östlichen Teil des Wolkenhorts>coloroff>...\n\n\nEr heult vor sich hin wie ein kleines Baby.\nVielleicht siehst du mal nach ihm?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "Der <color blue<Wahrsager >coloroff>macht in letzter Zeit\nständig so ein verdrossenes Gesicht...\n\n\nEr meinte, sein Kristalldingsda sei\nkaputt, und verkriecht sich seitdem\nständig in seinem Haus.")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "Tja...")
/*<194>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "Also hat sich unser lieber Wahrsager\ntatsächlich in seinem Haus verkrochen.\n\n\nWenn doch nur jemand für ihn eine\nneue Kristallkugel auftreiben würde...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf(/* textboxtype: 0, unk: 0, line: 5 */ "Wie wäre es, wenn du mal nach dem\nWahrsager siehst?\n\n\nSein Haus liegt <color red<im östlichen Teil des\nWolkenhorts>coloroff>.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "Warst du schon mal nachts hier im\nWolkenhort unterwegs?<pause 25> Da ist so\neiniges anders als tagsüber!\n\nWenn du unseren Item-Händler nachts\nin seinem Haus besuchst, kauft er dir\nzum Beispiel deine Schätze ab.\n\nNachts ist es zwar gefährlicher als\ntagsüber, aber für einen Ritterschüler\nsollte das doch kein Problem sein!\n\nNicht vergessen...<pause 25> <color green<Leg dich ins Bett>coloroff>,\nwenn du den Wolkenhort bei Nacht\nerleben willst!")
          			  case 1:
/*<  3>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "Wenn du müde wirst, dann...<pause 25> leg dich\neine Runde schlafen!\n\n\nDu kannst dich <color green<überall dort ausruhen,\nwo du ein Bett findest>coloroff>. Und glaub mir,\ndu wirst dich wundern!\n\nDer Unterschied zwischen Tag und\nNacht im Wolkenhort ist größer, als\ndu denkst!\n\nAlso <color green<leg dich schlafen >coloroff>und sieh dir den\nWolkenhort bei Nacht an, wenn du ein\npaar interessante Dinge erleben willst!")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "Spieglein, Spieglein an der Wand...\nWer ist der Schönste im Wolkenland?")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x22000002>Das ist es doch, was du denkst, oder\netwa nicht, <heroname>?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ich habe da so ein Gerücht gehört.\n<color red<Nachts>coloroff> erklingt beim <color red<Wohnheim >coloroff>der\nRitterschule die Stimme einer Frau!\n\nIch mag zwar aussehen wie ein starker\nKerl, aber solche Geschichten treiben\nmir den Angstschweiß auf die Stirn!")
/*<170>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "Was? Eine Hand? Aus der Toilette...\n\n\n\nIst <pause 20>es dir nicht ein wenig peinlich,\nden Leuten so etwas zu erzählen?")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ich habe da so ein Gerücht gehört.\n<color red<Nachts>coloroff> erklingt beim <color red<Wohnheim >coloroff>der\nRitterschule die Stimme einer Frau!\n\nIch mag zwar aussehen wie ein starker\nKerl, aber solche Geschichten treiben\nmir den Angstschweiß auf die Stirn!")
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "Was sagst du da?<pause 20> Jemand auf der\nToilette ruft nach Papier?\n\n\nIch kenne das Gefühl, wenn man da\nsitzt und plötzlich bemerkt, dass kein\nPapier da ist! Das ist wirklich unschön.")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ich habe da so ein Gerücht gehört.\n<color red<Nachts>coloroff> erklingt beim <color red<Wohnheim >coloroff>der\nRitterschule die Stimme einer Frau!\n\nIch mag zwar aussehen wie ein starker\nKerl, aber solche Geschichten treiben\nmir den Angstschweiß auf die Stirn!")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "<icon 19> drücken und die <color red<Hilfe>coloroff> aufrufen...\nDas machst du doch ab und zu, oder?<0x10011:0x0bcd>")
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Du bist jetzt ein vollwertiger Anwärter\nauf den Ritterposten. Gratulation!\n\n\nAber ich bin sicher, es gibt noch viele\nDinge, über die du nicht Bescheid\nweißt, nicht wahr?\n\n„Solltest du Probleme haben, drücke\nstets <icon 19> und rufe die <color red<Hilfe>coloroff> auf.“\nDas ist so etwas wie eine Grundregel!<0x10011:0x0bcd>")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000001>Oh, du bist es, <heroname>!\nHeute ist es endlich so weit. Freust du dich\nschon auf die Vogelreiter-Zeremonie?\n\nWenn du gewinnst, kannst du in die\nOberstufe aufsteigen!")
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Hier im Wolkenhort gilt man erst als\nerwachsen, wenn man das Reiten auf\neinem Wolkenvogel beherrscht.\n\n<0x10009:0x000a0404>Ihr Jungspunde, die ihr Ritter werden\nwollt, müsst natürlich noch viel mehr\nbeherrschen als das.\n\nAber auch wir unterziehen uns stets\nverschiedenen Übungen und lernen so,\nauf den Wolkenvögeln zu reiten!")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000002>Denkst du nicht, dass es ein klein wenig\nunhöflich ist, einfach so in mein Haus\nhereinzuplatzen?\n\nIch arbeite ja üblicherweise im Basar, aber\nheute ist schließlich der Tag der Vogelreiter-\nZeremonie, daher habe ich frei!\n\n<0x10009:0x00000015>Am liebsten würde ich mir immer freinehmen,\nwenn viel zu tun ist, aber am Ende ist mir dann\ndoch nur langweilig.")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x12110016>Bis<pause 15> zum nächsten Mal!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x14080913>Ja, ich freue mich schon!\n\n\n\nIch sollte mich wohl bald bei deiner\nMutter vorstellen.\n\n\nSie ist sicher genauso ehrlich und\nfleißig wie du, oder?")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x12090c18>Bei meiner Mutter?!? Ähm, also...\nNein, dafür ist es wohl noch zu früh...")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x14000005>Wieso denn das? Ich finde nicht, dass\nes zu früh ist!\n\n\n<0x10009:0x14080913>Lade mich doch einfach mal zu dir\nnach Hause ein!")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000001>Hallo, <heroname>!\nWas willst du denn so spät nachts hier?\n\n\n<0x10009:0x00111300>Und wie lange braucht Mama noch mit\ndem Abendessen? Ich hab schon einen\nRiiiesenhunger!")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000e0812>Die Göttin ist verschwunden!\n\n\n\n<0x10009:0x000f0d00>Was geschieht denn hier bloß?")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf(/* textboxtype: 0, unk: 1, line: 67 */ "Meine Kuki ist immer noch nicht nach\nHause gekommen...\n\n\nIch mache mir wirklich Sorgen um sie!\n<0x10009:0x00000800>Würdest du mir helfen, sie zu suchen,\n<heroname>?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000001>Hey, mein Freund! Kommst du gut mit\nmeinem kleinen Trapo zurecht? Er hat\nein loses Mundwerk, aber eigentlich ist\ner ein sehr netter Roboter.\nIch hoffe, ihr zwei werdet Freunde!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000003>Na, so spät noch allein unterwegs, mein\nFreund? Pass bloß auf, dass dir die\nLemurin nicht in den Hintern beißen!\n\nNachts geht man hier im Wolkenhort\nbesser nur raus, wenn es wirklich\nunvermeidbar ist!")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "Mein Meister scheint viel Spaß dabei zu haben,\nGegenstände oder Maschinen zu reparieren.\n\n\nGerade baut er eine vollautomatische\nWaschmaschine für seine Mutter!\nIst mein Meister nicht nett?\n\nGanz anders als ein gewisser grüner Wicht,\nder meine verehrte Phai dazu benutzt,\nmich ständig irgendwohin zu beordern!")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000056>Mein Junge treibt mich noch zur Weißglut!\nKannst du ihm nicht ins Gewissen reden?")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Ich war so froh, dass dieser Roboter\nwieder funktioniert, und dann das!\nIch dachte ja, jetzt hört er endlich mit\nder ständigen Werkelei auf, aber nein!\nJetzt schraubt er Tag und Nacht an\nirgendwelchem anderen Müll herum.\nDieser Junge raubt mir den letzten Nerv!")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ständig werkelt er bis spät in die Nacht an\ndiesem Roboter unserer Vorfahren herum!\n\n\nWozu soll es denn gut sein, diesen alten\nSchrotthaufen zu reparieren?")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000056>Mein Junge ist heute schon wieder voll\nDreck und Öl nach Hause gekommen!\n\n\nEs mag ja sein, dass er mit Maschinen\nhantiert, aber jeden Tag alles so zu\nverdrecken... Furchtbar!\n[1-]Dein Junge?[2-]Das klingt\nanstrengend.")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Der Schmutzfink, der sich tagtäglich in der\nWerkstatt die Kleidung schmutzig macht!\nDu kennst ihn doch?")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Dieser Junge bringt mich noch um den\nVerstand! So ein Dreckspatz!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00001101>Solltest du dich nicht auf die Socken\nmachen und schleunigst deinen roten\nWolkenvogel suchen?")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00001104>Was war das denn eben für ein Streit\ndort drüben? Das schien ja eine recht\nernste Sache zu sein...")
          		}
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000005>Es ist ein tolles Gefühl, hier einfach\nnur zu sitzen.\n\n\nWenn ich hier sitze, muss ich immer an\ndieses eine Mädchen denken...\n\n\n<0x10009:0x000a0c00><color blue<Kabocha>coloroff> aus der Kürbisbar ist so\nunendlich süß...")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000001>Hallo, <heroname>!\nHast du hier irgendwo meine Kuki gesehen?\n\n\nSie läuft mir ständig davon! Ich mache mir\ngroße Sorgen...")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0000000a>Hallo, <heroname>!\nHast du denn zufällig meine kleine\nKuki gesehen?\n\nSie läuft ständig wie wild herum, da komme\nich nicht hinterher... Ich hoffe jedes Mal, dass\nsie bloß wohlbehalten wieder zurückkommt...")
          	}
          }

          void entrypoint_122_26() {
/*< 96>*/ 	start()
/*< 97>*/ 	set_camera(4, 0)
/*< 98>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_27() {
/*<101>*/ 	start()
/*<195>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<197>*/ 		switch (story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */]) {
          		  case 0:
/*<198>*/ 			entrypoint_118_12();
          		  case 1:
          			flw_102:
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000004>Oh, du bist es! Die Göttin ist weg!\n\n\n\n<0x10009:0x00000011>Ist die Göttin etwa böse, weil ich nicht\nauf Mama und Papa gehört habe?")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000001>Hallo, <heroname>!\nDas da ist mein Haus!\n\n\nHeute gehe ich wieder spielen, aber ich\nsag dir nicht, mit wem! Das wird lustig!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x0009030a>Aaaaaaaaah!\n\n\n\n<0x10009:0x00ffff04>Oh...<pause 20> Na ja, setz dich ruhig hin, wenn\ndu willst.\n\n\n<0x10009:0x00ff03ff>Aber mach dieses Möbelstück ja nicht\nschmutzig! Du kannst dir gar nicht\nvorstellen, wie teuer das war!")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000011>Dämonenonkel... *chrrr*\nGanz lieb... *chrrr*")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "Es tut mir leid, aber die Essenszeit ist\nschon vorüber. Du musst wohl bis zum\nMittagessen warten.")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000001>Hallo, <heroname>!\nSieh dich mal hier um!\n\n\nOhne die Monster ist es hier nachts\nrichtig friedlich...\n\n\nIch kann mich nicht erinnern, wann ich\nzum letzten Mal so einen entspannten\nNachtspaziergang machen konnte...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000001>Du hast meine kleine Kuki gefunden, richtig?\nVielen Dank!\n\n\n<0x10009:0x00000009>Und sieh nur, da machen wir uns solche Sorgen\nund sie liegt hier seelenruhig und schnarcht!")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0000000e>Ist das wahr? Du hast Kuki wirklich gefunden?\n\n\n\nIch hab's doch gleich gesagt! Hier bei uns\nim Wolkenhort gibt es eben keine Unholde,\ndie Kinder entführen!")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Im Namen der Göttin... Wo ist meine\nkleine Kuki?\n\n\nMeine Frau meint, sie wäre entführt\nworden, aber das glaube ich nicht!\n<0x10009:0x000e0d00>Hier im Wolkenhort lebt niemand, der\nso etwas Schreckliches tun würde!\n<0x10009:0x00000d0f>Ja, ich bin sicher, sie kommt bald\nwieder zurück...\n\n\nNa ja, sag Kuki jedenfalls, dass wir auf\nsie warten, falls du sie sehen solltest!")
          				  case 1:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Hallöchen, <heroname>!\nMeine Kuki sieht so unendlich süß aus,\nwenn sie schläft, findest du nicht?\n\nIch arbeite wirklich hart für sie, und\nich habe das Gefühl, das ist es wert!\n\n\nAber was meint sie bloß, wenn sie\n„lieber Dämonenonkel“ sagt?")
          				}
          			}
          		}
          	}
          }

          void entrypoint_122_13() {
/*< 31>*/ 	start()
/*< 61>*/ 	switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          	  case 0:
/*<188>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 60, 'param3': 31}
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000012>Oh nein, ich konnte Kuki immer noch\nnicht finden!\n\n\nIch bitte dich, finde meine kleine Kuki,\nso schnell du nur kannst!")
          	  case 1:
/*< 32>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000001>Huch! Was kann ich so spät abends für\ndich tun?")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "Es tut mir leid, aber die Essenszeit ist\nschon vorüber. Du musst wohl bis zum\nMittagessen warten.")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000002>Hallo, <heroname>!\nKuki ist wieder zurück! Du warst es doch,\nder sie gefunden hat, richtig?\n\n<0x10009:0x00100d09>Ich danke dir! Meine Frau und ich sind\neinfach überglücklich!")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000f0d12>Ach, <heroname>...\nMeine kleine Kuki ist einfach verschwunden.\n\n\n\n<0x10009:0x00ffff00>Ob sie wirklich entführt wurde?\nMeine Ehefrau ist überzeugt davon...\n\n<0x10009:0x00100d03>Aber wie ich Kuki kenne,<pause 10> spielt sie\nwahrscheinlich nur wieder irgendwo...")
/*<120>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x000f0d00>Sag mir Bescheid, wenn du Kuki gefunden hast!")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000002>Oh, <heroname>!\n\n\n\nDas hier ist der <color red<Turm des Lichts>coloroff>!\nKlettere doch mal hoch und genieße\ndie tolle Aussicht!")
          			  case 1:
/*< 34>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000002>Ah, du bist es, <heroname>!\nDas hier ist der <color red<Turm des Lichts>coloroff>!\nEr ist quasi unser Wahrzeichen!\n\n<0x10009:0x000f0d00>Na ja, er leuchtet aber nicht, obwohl er Turm\ndes Lichts heißt. Hmmm... Ich frage mich,\nwozu dieses Ding eigentlich gebaut wurde!\nUnd vor allem von wem!\n<0x10009:0x00100d00>Aber sei's drum, immerhin hat man von\noben einen wirklich ausgezeichneten\nBlick auf die Statue der Göttin!")
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000f0d05>Ich?!?\n\n\n\n<0x10009:0x00000800>Nein, ich geh da nicht rauf! Ich habe\ndoch Höhenangst!")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10012:0x00000064>Oh! Das ist der Eingang zum Vulkan.\n<pause 30>Ich bin bestimmt schneller am Ziel als\ndu, schleichender grüner Wicht!")
          }

          void entrypoint_122_15() {
/*< 36>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 37, 'next': 45, 'param3': 32}
/*< 45>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 38, 'next': 46, 'param3': 32}
/*< 46>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 39, 'next': 62, 'param3': 32}
/*< 62>*/ 	set_camera(1, 0)
/*<179>*/ 	switch (story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */]) {
          	  case 0:
/*<176>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 173, 'param3': 16}
/*<173>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x25070707>Hey, hast du schon gehört? Einer der Schüler,\nder an der Vogelreiter-Zeremonie teilnimmt,\nhat seinen Wolkenvogel verloren!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x26070701>Was? Wie kann man denn einen\nWolkenvogel verlieren? Das klingt\nnach einem großen Problem!")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x27070702>Also ich hab's ja nicht so mit diesen\nWolkenvögeln. Die Krallen machen\nmir irgendwie Angst...")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x25070707>Heute ist solch ein gutes Wetter und wir können\nes nicht genießen, weil wir so beschäftigt sind!")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x26070701>Ich sage es euch! Mein Sohn kommt\ntagtäglich dreckig nach Hause, dieser\nungezogene Bengel!\n\nWie sehr ich seine Sachen auch wasche,\nes ist jeden Tag dasselbe Spiel!")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x27070702>Waschen ist absolut nichts für mich!\nIch wünschte, jemand würde das für\nmich übernehmen.")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	wait_frames(20)
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x070a0c12>Hmmm... <0x10008:0xfecd>Wo ist sie bloß hin...")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "Es würde mich freuen, wenn du mir wieder\neinmal Gesellschaft leisten würdest.")
          	  case 1:
/*<141>*/ 		printf(/* textboxtype: 0, unk: 0, line: 50 */ "Hi hi hi hi... Na, kleiner Mann? Du scheinst\ndich ja mächtig ins Zeug zu legen. Soll ich\ndich auf ein Getränk einladen?\n[1-]Gerne![2]Nein, danke.")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00010700>Das wollte ich hören!\nAlso dann, hoch die Tassen, Jungspund!")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			wait_frames(60)
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00070700>Dieses Gebräu hier ist ja fantastisch!\nRichtig lecker und fruchtig!")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf(/* textboxtype: 0, unk: 1, line: 55 */ "Ich werde dir einen guten Rat geben,\nkleiner Mann, also hör mir jetzt gut zu.\n\n\nWenn du durchs Wolkenmeer fliegst,\nwirst du manchmal <color red<Felsen>coloroff> sehen, <color red<in\ndenen sich Löcher befinden>coloroff>.\n\n<0x10009:0x00010700>Ich habe gehört, dass sich in diesen\nLöchern Energie ansammelt.\n\n\nWenn du da mit deinem Wolkenvogel\ndurchbretterst, nimmt dein Vögelchen\ndiese Energie in sich auf und... woff!\n\n<0x10009:0x00070700>Nutze die Energie und fliege schneller\ndurchs Wolkenmeer. Nur dann kannst\ndu dich einen echten Ritter nennen!")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf(/* textboxtype: 0, unk: 0, line: 56 */ "Ich werde dir einen guten Rat geben,\nkleiner Mann, also hör mir jetzt gut zu.\n\n\n<0x10009:0x00010700>Wie hier im Wolkenhort sind über das\nganze Wolkenmeer große und kleine\nInseln verteilt. Sie schweben einfach!\n\nFrag mich aber nicht, was die Inseln in\nder Luft hält... Das weiß ich nicht!\n\n\n<0x10009:0x00070700>Wie auch immer, eines kann ich dir mit\nSicherheit sagen. Wir haben es nur der\nGöttin zu verdanken, dass wir in Glück\nund Frieden leben dürfen.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "Ho ho ho, sag bloß, dich interessiert,\nwas ich zu sagen habe?\n\n\nIn der Ritterschule, die du besuchst,\nlernt man den richtigen Umgang mit\nWolkenvögeln.\n\nWenn du ein echter Ritter wirst, kannst\ndu dich frei im Wolkenmeer bewegen\nund uns alle beschützen!\n\nVielleicht hast du sie ja auch schon mal\ngetroffen, als du von einer Klippe oder\neinem Abhang gefallen bist!\n\nWen ich meine? Na, unsere Luftretter\nnatürlich!\n\n\n<0x10009:0x00010700>Sie sind die Elite der Ritterschule!\nDu solltest auch versuchen, so zu werden\nwie sie!\n\n<0x10009:0x00070700>Ganz nebenbei, einer von ihnen ist\nzufälligerweise mein Enkel! Ho <pause 5>ho <pause 5>ho...")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "Ich werde dir einen guten Rat geben,\nkleiner Mann, also hör mir jetzt gut zu.\n\n\nHast du denn schon einmal einen dieser\n<color yellow<Ausdauertränke >coloroff>getrunken? Die gibt es\nim Trankladen zu kaufen!\n\n<0x10009:0x00010700>Diese Wunderdinger sorgen dafür, dass deine\nAusdaueranzeige viel langsamer abnimmt.\nToll, oder?\n\nDu denkst jetzt bestimmt, dass du ihn nur\ndann einsetzen kannst, wenn du eine lange\nStrecke laufen möchtest...\n\n<0x10009:0x00070700>Weit gefehlt! Auch andere deiner Aktionen\nwie die Wirbelattacke verbrauchen Ausdauer,\nalso ist dieser Trank wirklich nützlich!")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "Du willst einem alten Mann wohl nicht\nGesellschaft leisten. Ich verstehe...")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Hallo, <heroname>! Ich war ja nie\nwirklich ein Nachtmensch, aber seit die\nMonster nicht mehr da sind, gehe ich\neigentlich ganz gerne nachts raus.\nNachts ist es jetzt richtig angenehm\nohne die ganzen Biester!")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "Möchtest du auch etwas essen?\nDas Essen hier ist fabelhaft!\n\n\nLeider dauert es eine halbe Ewigkeit,\nbis es serviert wird...")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Jetzt noch ein wenig Pfeffer dazu...\n\n\n\n<0x10009:0x00000004>Wunderbar! Schmeckt auch heute wieder so,\nwie es soll!")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000004>Oh, <heroname>!\nDu siehst richtig müde aus. Aber ich\nverstehe das nur zu gut! Mir geht es\nauch immer so.\n<0x10009:0x00010d00>Du bist uns jederzeit willkommen, falls\ndu dich etwas ausruhen möchtest.")
          }

