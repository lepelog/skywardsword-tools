          void entrypoint_203_55() {
/*<147>*/ 	start()
/*<149>*/ 	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
          	  case 0:
/*<148>*/ 		printf(/* textboxtype: 1, unk: 0, line: 89 */ "Bringst du diesen <color red<Wasserbehälter >coloroff>zum Vulkan, wird es\ndir mit einer Wahrscheinlichkeit von 85 % gelingen,\ndas Feuer dort zu löschen.\n\nIch empfehle, dir diesen Behälter vom Wasserdrachen\nzu leihen.")
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 0, unk: 1, line: 88 */ "Die Wahrscheinlichkeit, dass das Wasser aus diesem\n<color red<Wasserbehälter >coloroff>reicht, um die Flammen am Vulkan\nzu löschen, beträgt 80 %.\n\nIch empfehle, dir diesen Behälter vom Wasserdrachen\nzu leihen<sound 4>.")
/*<167>*/ 		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
          	}
          }

          void entrypoint_203_72() {
/*<163>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 191 */ "Hey, grüner Wicht! Sieh zu und lerne!")
          }

          void entrypoint_203_03() {
/*<420>*/ 	start()
/*<421>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<422>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000004>Frieden ist was Schönes...\nAber ein bisschen langweilig ist es schon.\n\n\n<0x10009:0x00110005>In Zeiten der Ruhe wünscht man sich dann\nwieder Aufregung...")
          	  case 1:
/*<423>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000014>Das hier ist die Zuflucht von uns Kyu.\nDu kannst hier nicht einfach so herkommen,\nsonst finden uns die Monster!")
          	}
          }

          void entrypoint_203_90() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Hm...")
          }

          void entrypoint_203_56() {
/*<151>*/ 	start()
/*<177>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<178>*/ 		printf(/* textboxtype: 0, unk: 1, line: 91 */ "Nun...<pause 15>\nSoll ich den Roboter rufen?\n[1-]Ja, bitte![2-]Nein, den mag\nich nicht!")
          		flw_153:
/*<153>*/ 		switch (choice(2)) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 92 */ "Sehr wohl, <0x10012:0x00000005>Gebieter.\nIch werde nun nach ihm rufen.")
          		  case 1:
/*<181>*/ 			switch (scene_flags[127 /* 0xE 80 */]) {
          			  case 0:
/*<182>*/ 				printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10012:0x00000001>Gebieter...<pause 15> Mit Verlaub, du darfst dich nicht von\ndeinen Gefühlen beeinflussen lassen. Ich rufe ihn.")
          			  case 1:
/*<154>*/ 				printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10012:0x00000001>Gebieter...<pause 15> Mit Verlaub, du darfst dich nicht von\ndeinen Gefühlen beeinflussen lassen. Ich rufe ihn.")
          			}
          		}
          	  case 1:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 1, line: 90 */ "Soll ich den Roboter rufen, um den <color red<Wasserbehälter\n>coloroff>zu transportieren?\n[1-]Ja, bitte![2-]Den kann ich\nnicht leiden...")
          		goto flw_153
          	}
          }

          void entrypoint_203_73() {
/*<165>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 1, line: 192 */ "Ich warte damit dann wie immer am Himmel!")
/*<588>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_203_04() {
/*<441>*/ 	start()
/*<442>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
/*<445>*/ 		wait_frames(15)
/*<443>*/ 		printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000004>Manchmal meditiert <color blue<Senbuli>coloroff> beim Verstecken.\n\n\n\n<0x10009:0x00000001>Sich kurz hinzusetzen entspannt Geist\nund Körper...")
/*<444>*/ 		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
          	  case 1:
/*<424>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<426>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<427>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000013>Du findest <color blue<Senbuli>coloroff> sowieso gleich, da\nmacht das Verstecken keinen Spaß...")
          			  case 1:
/*<428>*/ 				printf(/* textboxtype: 1, unk: 1, line: 51 */ "<0x10009:0x00110013>Du hast <color blue<Senbuli>coloroff> schon wieder gefunden!\nAußer dir hat das noch niemand geschafft.\n\n\n<0x10009:0x000b0007>Hier, ich habe einen Preis für dich!\nDas habe ich beim Verstecken gefunden.")
/*<430>*/ 				give_item(176 0xB0);
/*<429>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000014>Verrate es niemandem!")
/*<431>*/ 				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
          			}
          		  case 1:
/*<425>*/ 			printf(/* textboxtype: 1, unk: 1, line: 48 */ "<0x10009:0x00000007>Hier leben wir Kyu.\nHier ist es angenehm und es gibt genug\nzu essen.")
          		}
          	}
          }

          void entrypoint_203_05() {
/*<  2>*/ 	start()
/*<224>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<432>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<433>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000002>Schade, dass das Wasser wieder weg ist.\nDa war wenigstens was los!")
/*<486>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Ho-ho-ho!")
/*<532>*/ 			entrypoint_203_09();
          		  case 1:
/*<434>*/ 			printf(/* textboxtype: 1, unk: 2, line: 66 */ "<0x10009:0x0000000e>Der Wasserdrache hat dich für würdig\nbefunden? Du liebe Güte!")
/*<531>*/ 			entrypoint_203_09();
          		}
          	  case 1:
/*<225>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<226>*/ 			printf(/* textboxtype: 2, unk: 0, line: 65 */ "<0x10009:0x0000000e>Du hast den Wasserdrachen getroffen!\nWie ich dich beneide!")
/*<530>*/ 			entrypoint_203_09();
          		  case 1:
/*<  5>*/ 			switch (scene_flags[55 /* 0x7 80 */]) {
          			  case 0:
/*<  9>*/ 				switch (story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */]) {
          				  case 0:
/*< 13>*/ 					switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          					  case 0:
/*< 15>*/ 						switch (temp_flags[5 /* 0x1 20 */]) {
          						  case 0:
          							flw_16:
/*< 16>*/ 							printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000002>Die Welt ist groß...\nIch würde diesen Einsiedler auch gern\nmal treffen.")
/*<334>*/ 							printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Ho-ho-ho!")
/*<529>*/ 							entrypoint_203_09();
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x0000000e>Du hast einen Einsiedler getroffen?\nIch dachte immer, es gibt nur fünf von\nuns Kyu!")
/*< 17>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          							goto flw_16
          						}
          					  case 1:
/*< 12>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x0000000e>Wirklich?\nDu bist bis nach ganz oben geklettert?\n\n\n<0x10009:0x00000008>Und da oben war jemand?\nDas muss ich mir selbst ansehen!")
/*<528>*/ 						entrypoint_203_09();
          					}
          				  case 1:
/*< 11>*/ 					switch (scene_flags[19 /* 0x3 08 */]) {
          					  case 0:
/*<  8>*/ 						printf(/* textboxtype: 1, unk: 1, line: 60 */ "<0x10009:0x0000000e>Wie? Du warst im Inneren des Baumes?")
/*< 80>*/ 						printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000002>Wenn du bis ganz nach oben kletterst,\nhast du sicher eine tolle Aussicht.\nVielleicht entdeckst du dabei auch\netwas Nützliches.")
/*<527>*/ 						entrypoint_203_09();
          					  case 1:
/*< 10>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000003>Es gibt hier im Wald Orte, an denen du\nnoch nicht gewesen bist.\n\n\n<0x10009:0x00000008>Nutze die Schuppe des Wasserdrachen!\nDrücke an der Wasseroberfläche (A),\num zu <color green<tauchen>coloroff>.")
/*<526>*/ 						entrypoint_203_09();
          					}
          				}
          			  case 1:
/*<436>*/ 				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          				  case 0:
/*< 20>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 					wait_frames(20)
/*<327>*/ 					set_camera(1, 0)
/*<330>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 3, 'param3': 13}
/*<  3>*/ 					printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x0000000e>Ist das etwa eine Schuppe vom Wasserdrachen?\n\n\n\n<0x10009:0x00000002>Damit kannst du dich im Wasser wie ein\nDrache in der Luft bewegen.")
/*<329>*/ 					set_camera(-1, 0)
/*<  6>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 13}
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 1, line: 57 */ "<0x10009:0x00000003>Es gibt hier im Wald Orte, an denen du\nnoch nicht gewesen bist.\n\n\n<0x10009:0x00000008>Warum nutzt du nicht die Kraft dieser\nSchuppe und suchst sie?")
/*<331>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 332, 'param3': 13}
/*<332>*/ 					printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Ho-ho-ho!")
/*<333>*/ 					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
/*<525>*/ 					entrypoint_203_09();
          				  case 1:
/*<435>*/ 					printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000003>Mir scheint, du hast deine Freundin hier im\nWald nicht gefunden...\n\n\n<0x10009:0x00000002>Gib nicht auf, und der Tag wird kommen,\nan dem ihr euch findet. So wie wir Kyu.")
/*<524>*/ 					entrypoint_203_09();
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_91() {
/*< 49>*/ 	start()
/*< 51>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 70>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*<319>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<320>*/ 				printf(/* textboxtype: 2, unk: 1, line: 114 */ "<0x10009:0x00090707>Was? Du hast das Wasser bereits?\nDann schnell, gieß das <color blue<heilige Wasser\n>coloroff>in diesen Behälter!")
          				flw_351:
/*<351>*/ 				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<549>*/ 				printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Hm...")
/*<318>*/ 				printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00070709>Oh!\nDas ist ohne jeden Zweifel <color blue<heiliges Wasser>coloroff>!\n\n\nSchnell, schütte es in meinen Behälter!")
          				goto flw_351
          			}
          		  case 1:
/*<548>*/ 			printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Hm...")
/*< 69>*/ 			printf(/* textboxtype: 0, unk: 2, line: 109 */ "<0x10009:0x00070706>Bring mir schnell das heilige Wasser,\ndann zeige ich dir, wo du die heilige\nFlamme findest.")
          		}
          	  case 1:
/*< 53>*/ 		switch (scene_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Hm...")
/*< 58>*/ 			printf(/* textboxtype: 2, unk: 0, line: 108 */ "<0x10009:0x00090706>Bring mir das <color blue<heilige Wasser>coloroff>, und ich\nzeige dir den Weg zur Flamme.\n[1-]Gut![2]Nö...")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				entrypoint_203_52();
          			  case 1:
/*< 59>*/ 				printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10009:0x00090704>Du bist letzten Endes eben doch nur\nein Mensch...")
/*<473>*/ 				temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<282>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<457>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 454, 'param3': 49}
/*<454>*/ 				wait_frames(20)
/*<455>*/ 				set_camera(11, 0)
/*<456>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 283, 'param3': 15}
          				flw_283:
/*<283>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x0000000f>Dieser Ort ist mein Heiligtum!\n\n\n\n<0x10009:0x00090700>Wesen wie du dürfen hier nicht einfach\nso herumplanschen!\n\n\nUnd sag, wie bist du eigentlich\nüberhaupt hierhergekommen?\n[1-]Bist du der\nWasserdrache?[2-]Ich habe mich\nverlaufen...")
/*< 54>*/ 				switch (choice(2)) {
          				  case 0:
/*<458>*/ 					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
/*<474>*/ 					set_camera(27, 0)
/*<475>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00070903>Ich bin in der Tat der Wasserdrache <color blue<Phirone\n>coloroff>und behüte im Auftrag der Göttin dieses Land.<color blue<\n\n>coloroff>\nAuch in dieser Gestalt diene ich der Göttin!\n\n\n\n<0x10009:0x00090900><pause 10>.<pause 10>.<pause 10>.<pause 10>\n<0x10009:0x00000007>Interessant...")
/*<451>*/ 					set_camera(11, 0)
/*<452>*/ 					printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00090900><0x10006:0xfecd>Du...<pause 15>\n<0x10009:0x00000006><0x10006:0x02cd>Du besitzt eine <color blue<Wasserdrachenschuppe>coloroff>.\n\n\n<0x10009:0x00090700>Nur der von der Göttin Auserwählte\nkann sie erlangen...\n<0x10009:0x00000005>Du bist also auserwählt?\n\n<0x10009:0x00070700>Aber die Schuppe allein reicht nicht,\num hierherzufinden...")
/*<453>*/ 					set_camera(27, 0)
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00070704>So...<pause 30> Der Kyu-Einsiedler hat es dir also\nverraten...\n\n\n<0x10009:0x00090910>Er hat mir versprochen, diesen Ort\ngeheim zu halten! Nun, ich denke, ich\nwerde ihn fressen müssen.\n\n<0x10009:0x00070900>Aber gut...<pause 30> Du bist sicher auf der\nSuche nach der <color red<heiligen Flamme>coloroff>?\n[1-]Genau![2-]Hab ich\nvergessen...")
/*<284>*/ 					switch (choice(2)) {
          					  case 0:
/*<285>*/ 						printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00090704>Nun, das dachte ich mir...")
          						flw_463:
/*<463>*/ 						printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00090700>Ich kann nicht glauben, dass die Göttin\neinen kleinen, schwachen Jungen wie\ndich auserwählt hat...\n\n<0x10009:0x00070703>Aber lassen wir es auf einen Versuch\nankommen.\n\n\nDer Anführer der Monster, <color blue<Ghirahim>coloroff>,\nhat mir eine Wunde zugefügt...")
/*<465>*/ 						set_camera(28, 0)
/*<464>*/ 						printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x0007070f>Das <color blue<heilige Wasser>coloroff> in diesem Behälter sollte\nsie eigentlich heilen.\n\n\n<0x10009:0x00090700>Aber die Wirkung lässt bisher zu wünschen\nübrig. Ich brauche frisches Wasser.\n\n\n<0x10009:0x00090906>Menschenkind, du musst <sound 4><color red<mir heiliges Wasser\nbringen>coloroff>, wie das in diesem Behälter.")
/*<450>*/ 						set_camera(27, 0)
/*< 56>*/ 						printf(/* textboxtype: 2, unk: 0, line: 105 */ "Im Gegenzug zeige ich dir, wo du die\n<color red<heilige Flamme>coloroff> findest.\n[1-]Gut![2]Nö...")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							temp_flags[3 /* 0x1 08 */] = true;
          							goto flw_61
          						  case 1:
/*<286>*/ 							printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10009:0x00090704>Du bist letzten Endes eben doch nur\nein Mensch...")
/*<287>*/ 							temp_flags[0 /* 0x1 01 */] = true;
/*<460>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<291>*/ 						set_camera(11, 0)
/*<292>*/ 						printf(/* textboxtype: 0, unk: 2, line: 112 */ "<0x10009:0x00090910><0x10008:0x01cd>Unverschämtes Menschenkind!\n\n\n\n<0x10009:0x00010900>Aber ich muss zugeben, du hast Mut,\nso mit mir zu reden.")
/*<296>*/ 						set_camera(27, 0)
          						goto flw_463
          					}
          				  case 1:
/*<289>*/ 					set_camera(11, 0)
/*<290>*/ 					printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00090910>Zeig etwas Respekt, Menschenkind!\n\n\n\nSo einen Bengel wie dich verschlinge\nich auf einen Bissen! Geh mir besser\nschnell aus den Augen!")
/*<459>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
/*<449>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 298, 'param3': 49}
/*<298>*/ 				wait_frames(20)
/*<412>*/ 				set_camera(11, 0)
/*<448>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 52, 'param3': 15}
/*< 52>*/ 				printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001><0x10008:0x02cd>Was muss ich da sehen?!?\n\n\n\nEin... Mensch?!?")
/*<281>*/ 				temp_flags[1 /* 0x1 02 */] = true;
/*<288>*/ 				set_camera(27, 0)
          				goto flw_283
          			}
          		}
          	}
          }

          void entrypoint_203_57() {
/*<156>*/ 	start()
/*<157>*/ 	printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10012:0x00000001>Gebieter, lass uns ins Wolkenmeer zurückkehren\nund von dort zum Vulkan fliegen.")
/*<166>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = true;
/*<206>*/ 	story_flags[677 /* us: 805A9B20 0x40, jp: 805ACDA0 0x40 */] = true;
/*<280>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<176>*/ 	scene_flags[2 'Lake Floria'][127 /* 0xE 80 */] = true;
/*<316>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<203>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*<204>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*<202>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*<205>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*<200>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*<201>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
          }

          void entrypoint_203_06() {
/*< 31>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0003000f>Das habe ich noch vergessen...<pause 15>\nDer Wasserdrache ist sehr stolz und\nlegt Wert auf gute Manieren, also achte\nauf dein Benehmen!\n<0x10009:0x00010000>Wenn er schlecht gelaunt ist...<pause 60>\n<0x10009:0x0000000b>Sagen wir so, gerade dann hat er\nBesuch zum Fressen gern...")
/*<447>*/ 	set_camera(18, 0)
/*<393>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00030006>Vergiss nicht, du darfst niemandem verraten,\ndass ich dir von Farores Flamme erzählt habe!\n\n\n<0x10009:0x00010000>Ich bin zu jung, um gefressen zu werden.\n\n\n\n<0x10009:0x00030007>Und achte auf deine Manieren!")
/*<446>*/ 	set_camera(20, 0)
/*<387>*/ 	printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Ich geh wieder schlafen.")
/*<388>*/ 	story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
/*<389>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_92() {
/*< 68>*/ 	start()
/*<172>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<497>*/ 			entrypoint_203_85();
          		  case 1:
/*<487>*/ 			printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x00070702>Die Kreaturen sind aus dem Wald\nverschwunden. Ich bin zufrieden.\n\n\nUnd du hast anscheinend gelernt,\ndie Kraft deines Schwertes zu nutzen.\n\n\n<0x10009:0x00070704>Ich gebe zu, als ich dich das erste Mal sah,\ndachte ich nicht, dass du eine große Hilfe\nsein würdest.<pause 30> Aber jetzt strahlst du\nSelbstvertrauen aus.\n<0x10009:0x00070706>Dennoch darfst du dich jetzt nicht ausruhen,\nsondern musst deine Bestimmung erfüllen!")
/*<489>*/ 			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*<173>*/ 		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          		  case 0:
/*<170>*/ 			printf(/* textboxtype: 0, unk: 2, line: 130 */ "<0x10009:0x00070702>Bring den Wasserbehälter zurück,\nwenn es dir beliebt. Du weißt, ich\nbrauche ihn eigentlich nicht mehr...")
          		  case 1:
/*<171>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<174>*/ 				switch (scene_flags[127 /* 0xE 80 */]) {
          				  case 0:
/*<175>*/ 					printf(/* textboxtype: 2, unk: 0, line: 129 */ "<0x10009:0x00070707>Du willst den <color red<Wasserbehälter >coloroff>erneut?<pause 30>\n<0x10009:0x00000005>Hm...<pause 15> So sei es denn.\n\n\nAber dieser Bursche, der ihn zuvor\nzurückgebracht hat, war ziemlich\nunverschämt und ungehobelt.\n\n<0x10009:0x00070706>Ich will es dir nachsehen, aber du solltest\nihm besser Manieren beibringen.")
          				  case 1:
/*<169>*/ 					printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10009:0x00000006>Sieh an, das Menschenkind.\nHast du gelernt, die Kraft deines\nSchwertes zu nutzen?\n\n<0x10009:0x00070707>Wie? Du möchtest dir meinen\n<color red<Wasserbehälter>coloroff> leihen?<pause 30>\n<0x10009:0x00000005>Hm...<pause 15> Nun gut...\n\nMeine Kraft ist zurück, ich werde ihn\nwohl so schnell nicht wieder benötigen.\n\n\n<0x10009:0x00070706>Mach damit, was du willst.")
          				}
          			  case 1:
/*<168>*/ 				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          				  case 0:
/*< 86>*/ 					printf(/* textboxtype: 0, unk: 2, line: 121 */ "<0x10009:0x00070702>Du solltest dich bemühen, die Kraft, die deinem\nSchwert innewohnt, zu meistern.")
          				  case 1:
/*< 74>*/ 					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          					  case 0:
/*< 73>*/ 						printf(/* textboxtype: 2, unk: 0, line: 120 */ "<0x10009:0x0007070f>Ghirahim...\nIrgendwann wirst du meine Vergeltung\nzu spüren bekommen.")
          					  case 1:
/*< 71>*/ 						printf(/* textboxtype: 0, unk: 2, line: 115 */ "<0x10009:0x00090900>Ah!\nMeine Kraft ist zurück!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_58() {
/*<299>*/ 	start()
/*<301>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 300, 'param3': 40}
/*<300>*/ 	wait_frames(15)
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 340, 'param2': 0, 'next': 310, 'param3': 51}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 308, 'param3': 16}
/*<308>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 309, 'param3': 17}
/*<309>*/ 	set_camera(13, 0)
/*<304>*/ 	printf(/* textboxtype: 1, unk: 1, line: 84 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nIch vermute, dass wir uns im Südwesten\ndes Waldes von Phirone befinden.\nBitte bestätige dies mithilfe der Karte.")
/*<321>*/ 	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
/*<322>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 0, 'next': 305, 'param3': 30}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 34}
/*<306>*/ 	wait_frames(15)
/*<303>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 311, 'param3': 36}
/*<311>*/ 	set_camera(14, 0)
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_93() {
/*< 72>*/ 	start()
/*<187>*/ 	set_camera(3, 0)
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 79, 'param3': 17}
/*< 79>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10009:0x00070705>Sieh...")
/*<188>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 17}
/*<189>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 270, 'param3': 17}
/*<270>*/ 	wait_frames(15)
/*<268>*/ 	set_camera(5, 0)
/*<269>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 266, 'param3': 13}
/*<266>*/ 	printf(/* textboxtype: 0, unk: 2, line: 124 */ "<0x10009:0x00000300><0x10005:0x003c0000><0x10008:0x01cd>Hmmm<0x10006:0xfccd>...")
/*<265>*/ 	set_camera(4, 0)
/*<267>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "")
/*< 78>*/ 	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
/*<273>*/ 	wait_frames(60)
/*<196>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 194, 'param3': 13}
/*<194>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 191, 'param3': 17}
/*<191>*/ 	printf(/* textboxtype: 2, unk: 0, line: 126 */ "<0x10009:0x00000006>Hier findest du die heilige Flamme.\n\n\n\nObwohl der Wasserfall diesen Eingang\nfür viele Jahre versperrte, konnten\nsich dort trotzdem Kreaturen des\nBösen einnisten.")
/*<274>*/ 	set_camera(8, 0)
/*<195>*/ 	set_camera(3, 0)
/*<192>*/ 	printf(/* textboxtype: 0, unk: 2, line: 127 */ "<0x10009:0x00070704>Jedoch sollte das für einen von der Göttin\nAuserwählten kein Hindernis sein.\n\n\nIch bin sicher, dass wir beide uns wiedersehen\nwerden, aber sei bitte dennoch vorsichtig.\n\n\n<0x10009:0x00070703>Bis bald.")
/*<193>*/ 	set_camera(6, 0)
/*<278>*/ 	wait_frames(15)
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 199, 'param3': 17}
/*<199>*/ 	make_actor_do_something(0, 0)
/*<314>*/ 	wait_frames(15)
/*<279>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 313, 'param3': 17}
/*<313>*/ 	wait_frames(15)
/*<197>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<271>*/ 	set_camera(7, 0)
/*<272>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_07() {
/*<352>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10005:0x003c0000><0x10008:0x02cd>Knyaaa!")
          }

          void entrypoint_203_59() {
/*<476>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "Der Wasserstand im Wald von Phirone ist gesunken.\nJetzt befindet sich der Wald wieder in seinem\nursprünglichen Zustand.")
/*<478>*/ 	entrypoint_006_04();
          }

          void entrypoint_203_94() {
/*<207>*/ 	start()
/*<315>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 209, 'param3': 17}
/*<209>*/ 	wait_frames(15)
/*<210>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 208, 'param3': 17}
/*<208>*/ 	printf(/* textboxtype: 2, unk: 1, line: 132 */ "<0x10009:0x00070702>Ich sehe, dein Schwert ist nun stärker denn je.")
/*<212>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1792, 'next': 211, 'param3': 13}
/*<211>*/ 	printf(/* textboxtype: 0, unk: 2, line: 133 */ "Obwohl du nur ein kleiner Junge bist,\nhat dich die Göttin auserwählt...")
/*<215>*/ 	set_camera(3, 0)
/*<214>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 213, 'param3': 13}
/*<213>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00070700>Aber noch weißt du die volle Kraft\ndeines Schwertes nicht einzusetzen.")
/*<217>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 216, 'param3': 13}
/*<216>*/ 	printf(/* textboxtype: 2, unk: 1, line: 135 */ "Du musst weiter lernen!\nDein Geist muss wachsen!")
/*<481>*/ 	set_camera(32, 0)
/*<480>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 479, 'param3': 13}
/*<479>*/ 	printf(/* textboxtype: 0, unk: 2, line: 136 */ "<0x10009:0x00070700>Bis bald.")
/*<483>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 485, 'param3': 17}
/*<485>*/ 	make_actor_do_something(0, 0)
/*<482>*/ 	set_camera(9, 0)
/*<218>*/ 	story_flags[118 /* us: 805A9AEA 0x08, jp: 805ACD6A 0x08 */] = true;
/*<275>*/ 	set_camera(10, 0)
/*<276>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_08() {
/*<390>*/ 	start()
/*<391>*/ 	printf(/* textboxtype: 1, unk: 1, line: 36 */ "<0x10009:0x0001000b><0x10005:0x003c0000><0x10008:0x02cd>Warte!")
          }

          void entrypoint_203_95() {
/*<335>*/ 	start()
/*<336>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10009:0x00070705>Sieh...")
          }

          void entrypoint_203_60() {
/*<500>*/ 	start()
/*<501>*/ 	printf(/* textboxtype: 1, unk: 0, line: 182 */ "Ich hätte nie gedacht, dass ein Mensch\nso tief tauchen kann.\n\n\nAber kannst du auch eine <color red<Wasserschraube>coloroff>\nausführen?")
          }

          void entrypoint_203_09() {
/*<519>*/ 	start()
/*<520>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<523>*/ 		printf(/* textboxtype: 2, unk: 0, line: 68 */ "<0x10009:0x00000008>Wie geht es Kombu in seinem neuen Zuhause?\nIch hoffe doch gut!")
          	  case 1:
/*<521>*/ 		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
          		  case 0:
/*<522>*/ 			printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Kombu scheint den Wald verlassen zu wollen.\nIch wünsche ihm alles Gute.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_203_96() {
/*<337>*/ 	start()
/*<339>*/ 	printf(/* textboxtype: 0, unk: 2, line: 124 */ "<0x10009:0x00000300><0x10005:0x003c0000><0x10008:0x01cd>Hmmm<0x10006:0xfccd>...")
          }

          void entrypoint_203_61() {
/*<502>*/ 	start()
/*<503>*/ 	printf(/* textboxtype: 1, unk: 1, line: 183 */ "Kennst du den <color red<Schraubensprung>coloroff>, Mensch?\n\n\n\nWenn du eine Wasserschraube <color red<in Richtung der\nWasseroberfläche >coloroff>ausführst, kannst du springen\nwie ein Fisch!")
          }

          void entrypoint_203_97() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "")
          }

          void entrypoint_203_62() {
/*<504>*/ 	start()
/*<505>*/ 	printf(/* textboxtype: 0, unk: 1, line: 184 */ "Ein Mensch! Ein Mensch!<pause 20>\nDas sieht man hier nicht oft.")
          }

          void entrypoint_203_10() {
/*<579>*/ 	start()
/*<580>*/ 	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<581>*/ 	set_camera(24, 0)
/*<582>*/ 	printf(/* textboxtype: 1, unk: 2, line: 30 */ "<0x10009:0x00000003>Ergänze das Symbol auf dem Tor im\nsüdlichen Teil des Waldes und erfülle\nes mit der Kraft der Göttin.")
/*<583>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 584, 'param3': 30}
/*<584>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000009>Verwende ein Signallicht, um die mit\n(X) markierte Stelle zu finden!")
/*<585>*/ 	set_camera(18, 0)
          	flw_406:
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 35, 'param3': 34}
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00010006>Was ist?\nHast du dir gemerkt, wo du das Symbol\nfindest?\n[1-]Natürlich![2]Noch nicht.")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Ich geh wieder schlafen.")
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00030007>Na dann, gute Reise.")
/*< 48>*/ 			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
          		}
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000003>Was will man machen...\nDann eben noch mal.")
          		flw_37:
/*< 37>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 30}
/*< 32>*/ 		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000009>Verwende ein Signallicht, um die mit\n(X) markierte Stelle zu finden!")
          			goto flw_406
          		  case 1:
/*< 34>*/ 			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<411>*/ 			printf(/* textboxtype: 1, unk: 1, line: 27 */ "<0x10009:0x00010004>Das Gegenstück des Symbols im Süden\nbefindet sich im Norden...\nSieh dich mal an dem Ort um, den ich\nauf der Karte mit (X) markiert habe.")
          			goto flw_406
          		}
          	}
          }

          void entrypoint_203_80() {
/*< 87>*/ 	start()
/*<104>*/ 	switch (story_flags[111 /* us: 805A9AEB 0x10, jp: 805ACD6B 0x10 */]) {
          	  case 0:
/*<105>*/ 		switch (story_flags[112 /* us: 805A9AEB 0x20, jp: 805ACD6B 0x20 */]) {
          		  case 0:
/*<121>*/ 			switch (story_flags[113 /* us: 805A9AEB 0x40, jp: 805ACD6B 0x40 */]) {
          			  case 0:
/*<129>*/ 				switch (story_flags[114 /* us: 805A9AEB 0x80, jp: 805ACD6B 0x80 */]) {
          				  case 0:
/*<138>*/ 					switch (scene_flags[15 /* 0x0 80 */]) {
          					  case 0:
/*<140>*/ 						switch (temp_flags[15 /* 0x0 80 */]) {
          						  case 0:
/*<262>*/ 							switch (temp_flags[16 /* 0x3 01 */]) {
          							  case 0:
/*<263>*/ 								printf(/* textboxtype: 0, unk: 1, line: 160 */ "Hier entlang.")
          							  case 1:
/*<261>*/ 								printf(/* textboxtype: 1, unk: 0, line: 159 */ "Gleich sind wir beim Wasserdrachen.\nBitte warte einen Moment!")
/*<264>*/ 								temp_flags[16 /* 0x3 01 */] = true;
          							}
          						  case 1:
/*<139>*/ 							printf(/* textboxtype: 0, unk: 0, line: 158 */ "Endlich da!")
/*<142>*/ 							temp_flags[15 /* 0x0 80 */] = true;
          						}
          					  case 1:
/*<141>*/ 						printf(/* textboxtype: 0, unk: 1, line: 157 */ "Großartig!\nKein Zweifel, du musst der\nAuserwählte der Göttin sein!")
/*<143>*/ 						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
          					}
          				  case 1:
/*<130>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
/*<345>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 131, 'param3': 13}
/*<131>*/ 						switch (temp_flags[14 /* 0x0 40 */]) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "Möge das Wasser dich schützen!")
          						  case 1:
/*<555>*/ 							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
/*<554>*/ 							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
/*<556>*/ 							printf(/* textboxtype: 0, unk: 0, line: 155 */ "Ah, nicht dieser Fisch!\nGanze Schwärme dieser Fische haben\nden Wasserdrachen angegriffen!\n\nSei vorsichtig!")
/*<557>*/ 							temp_flags[14 /* 0x0 40 */] = true;
/*<550>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 551, 'param3': 32}
/*<551>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 552, 'param3': 17}
/*<552>*/ 							set_camera(33, 0)
/*<553>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 0, unk: 1, line: 154 */ "Fantastisch!\n\n\n\nNicht du, schließlich ist dir das nur dank\nder Wasserdrachenschuppe gelungen.")
/*<134>*/ 						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
          					}
          				}
          			  case 1:
/*<122>*/ 				switch (scene_flags[13 /* 0x0 20 */]) {
          				  case 0:
/*<124>*/ 					switch (temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
/*<125>*/ 						printf(/* textboxtype: 1, unk: 0, line: 153 */ "Wenn es nicht weitergeht, versuche,\nzu springen!")
/*<587>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          					  case 1:
/*<123>*/ 						printf(/* textboxtype: 0, unk: 0, line: 152 */ "Hier! Hier! Schnell!\n\n\n\n...Was? Du kannst nicht weiter? Ihr Menschen\nseid ja wirklich unpraktisch gebaut. Kommst du\nnicht oben drüber?")
/*<127>*/ 						temp_flags[13 /* 0x0 20 */] = true;
          					}
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 0, unk: 1, line: 151 */ "Bald sind wir da!\nDa vorn wartet der Wasserdrache!")
/*<128>*/ 					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
          				}
          			}
          		  case 1:
/*<113>*/ 			switch (scene_flags[12 /* 0x0 10 */]) {
          			  case 0:
/*<115>*/ 				switch (temp_flags[12 /* 0x0 10 */]) {
          				  case 0:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "Nur keine Angst vor den Monstern da drüben!\nSie sind der perfekte Anlass, um eine\n<color red<Wasserschraube>coloroff> auszuführen!")
          				  case 1:
/*<114>*/ 					printf(/* textboxtype: 0, unk: 0, line: 149 */ "Hier sollte ein Freund von mir auf\nuns warten, aber er ist nicht hier...\n\n\nDafür versperren uns Felsen den Weg.\nUnd was machen wir jetzt?")
/*<118>*/ 					temp_flags[12 /* 0x0 10 */] = true;
          				}
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 1, unk: 0, line: 147 */ "Unmöglich! Ein Mensch kann diese\nTechnik nicht einsetzen!\n\n\nOh.<pause 10>.<pause 10>.<pause 10>\nDu hast eine <color blue<Wasserdrachenschuppe>coloroff>?\n\n\nHeißt das...<pause 15>\nHeißt das, du bist der <color red<Auserwählte der\nGöttin>coloroff>, von dem der Wasserdrache vor\nlanger Zeit gesprochen hat?\nWenn das so ist, kannst du dem\nWasserdrachen vielleicht helfen!\n[1-]Was ist los?[2-]Bring mich hin.")
/*<498>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_499:
/*<499>*/ 					printf(/* textboxtype: 0, unk: 1, line: 148 */ "Es ist erst vor Kurzem geschehen...<pause 15>\nEine Bande von roten Kerlen und ihr\ngemeiner Anführer haben den\nWasserdrachen angegriffen!\nDer Wasserdrache ist sehr mächtig und\nhat sie auch fast alle gefressen, aber...\n\n\nEs waren doch zu viele. Ihr Anführer\nhat es geschafft, den Wasserdrachen\nzu verwunden.\n\nUnser Wasser reicht für das Heilen\nseiner Verletzung nicht aus.\n\n\nBitte, rede mit dem Wasserdrachen!\n\n\n\nIch bringe dich zu ihm!")
/*<119>*/ 					scene_flags[2 'Lake Floria'][12 /* 0x0 10 */] = true;
          				  case 1:
          					goto flw_499
          				}
          			}
          		}
          	  case 1:
/*<106>*/ 		switch (scene_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<108>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 0, unk: 0, line: 146 */ "Ohne die <color green<Wasserschraube>coloroff> kommst du\nhier nicht weiter.")
/*<586>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          			  case 1:
/*<107>*/ 				printf(/* textboxtype: 0, unk: 1, line: 145 */ "Puh... Du bist ganz schön weit gekommen,\naber hier schaffst du es sicher nicht hindurch!\n\n\nDu siehst das anders? Dann versuch doch,\nmich zu fangen!")
/*<111>*/ 				temp_flags[11 /* 0x0 08 */] = true;
          			}
          		  case 1:
/*<508>*/ 			switch (scene_flags[110 /* 0xC 40 */]) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 143 */ "Du Nervensäge! Folge mir nicht weiter!\nIch sag es sonst dem Wasserdrachen!")
/*<112>*/ 				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
          			  case 1:
/*<509>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "Was? Noch ein Mensch?!?\n\n\n\nIch verschwinde, bevor er mich sieht...")
/*<510>*/ 				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_203_98() {
/*<341>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 2, unk: 0, line: 126 */ "<0x10009:0x00000006>Hier findest du die heilige Flamme.\n\n\n\nObwohl der Wasserfall diesen Eingang\nfür viele Jahre versperrte, konnten\nsich dort trotzdem Kreaturen des\nBösen einnisten.")
          }

          void entrypoint_203_63() {
/*<506>*/ 	start()
/*<507>*/ 	printf(/* textboxtype: 1, unk: 0, line: 185 */ "Es war hier friedlich und ruhig.\nUnd dann kam ein Mensch...\n\n\nJetzt treiben riesige Fische hier ihr Unwesen,\nnicht mal sein Mittagsschläfchen kann man\nmehr halten.")
          }

          void entrypoint_203_81() {
/*< 88>*/ 	start()
/*< 90>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<101>*/ 		printf(/* textboxtype: 2, unk: 0, line: 170 */ "Ich habe hier aufgepasst, während der\nWald überschwemmt war.\n\n\nDas war toll, ich konnte tun und lassen,\nwas ich wollte. Leider ist das nun vorbei...")
/*<562>*/ 		set_camera(34, 0)
/*<103>*/ 		make_actor_do_something(0, 0)
/*<102>*/ 		printf(/* textboxtype: 1, unk: 0, line: 171 */ "Vorbei! Vorbei!")
          		flw_563:
/*<563>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<323>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<324>*/ 			printf(/* textboxtype: 1, unk: 0, line: 168 */ "Der Wasserdrache ist nach draußen gegangen.")
/*<561>*/ 			set_camera(34, 0)
/*<326>*/ 			make_actor_do_something(0, 0)
/*<325>*/ 			printf(/* textboxtype: 0, unk: 1, line: 169 */ "Gegangen! Gegangen!")
          			goto flw_563
          		  case 1:
/*< 89>*/ 			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          			  case 0:
/*< 98>*/ 				printf(/* textboxtype: 0, unk: 1, line: 166 */ "Dank dir geht es dem Wasserdrachen\nwieder gut!")
/*<560>*/ 				set_camera(34, 0)
/*<100>*/ 				make_actor_do_something(0, 0)
/*< 99>*/ 				printf(/* textboxtype: 0, unk: 0, line: 167 */ "Dank dir! Dank dir!")
          				goto flw_563
          			  case 1:
/*< 93>*/ 				switch (random(2)) {
          				  case 0:
/*< 95>*/ 					printf(/* textboxtype: 0, unk: 0, line: 164 */ "Bitte hilf dem Wasserdrachen!")
/*<558>*/ 					set_camera(34, 0)
/*< 97>*/ 					make_actor_do_something(0, 0)
/*< 96>*/ 					printf(/* textboxtype: 1, unk: 0, line: 165 */ "Hilf! Hilf!")
          					goto flw_563
          				  case 1:
/*< 91>*/ 					printf(/* textboxtype: 1, unk: 0, line: 162 */ "Der Wasserdrache erwartet dich.\nHöre, was er zu sagen hat.")
/*<559>*/ 					set_camera(34, 0)
/*< 94>*/ 					make_actor_do_something(0, 0)
/*< 92>*/ 					printf(/* textboxtype: 0, unk: 1, line: 163 */ "Höre! Höre!")
          					goto flw_563
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_99() {
/*<343>*/ 	start()
/*<344>*/ 	printf(/* textboxtype: 0, unk: 2, line: 127 */ "<0x10009:0x00070704>Jedoch sollte das für einen von der Göttin\nAuserwählten kein Hindernis sein.\n\n\nIch bin sicher, dass wir beide uns wiedersehen\nwerden, aber sei bitte dennoch vorsichtig.\n\n\n<0x10009:0x00070703>Bis bald.")
/*<518>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
          }

          void entrypoint_203_64() {
/*<511>*/ 	start()
/*<512>*/ 	printf(/* textboxtype: 1, unk: 1, line: 186 */ "Er wollte den Wasserdrachen auf seine\nSeite ziehen!\n\n\nAber der Wasserdrache würde mit\nseinesgleichen niemals gemeinsame\nSache machen!")
          }

          void entrypoint_203_82() {
/*<120>*/ 	start()
/*<136>*/ 	switch (random(2)) {
          	  case 0:
/*<137>*/ 		printf(/* textboxtype: 0, unk: 0, line: 152 */ "Hier! Hier! Schnell!\n\n\n\n...Was? Du kannst nicht weiter? Ihr Menschen\nseid ja wirklich unpraktisch gebaut. Kommst du\nnicht oben drüber?")
          	  case 1:
/*<135>*/ 		printf(/* textboxtype: 0, unk: 1, line: 145 */ "Puh... Du bist ganz schön weit gekommen,\naber hier schaffst du es sicher nicht hindurch!\n\n\nDu siehst das anders? Dann versuch doch,\nmich zu fangen!")
          	}
          }

          void entrypoint_203_65() {
/*<513>*/ 	start()
/*<514>*/ 	printf(/* textboxtype: 0, unk: 1, line: 187 */ "Ein tolles Haus, oder?\nLeider kommt man nur schwer hinein.")
          }

          void entrypoint_203_83() {
/*<233>*/ 	start()
/*<245>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*<246>*/ 		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          			  case 0:
/*<251>*/ 				printf(/* textboxtype: 0, unk: 1, line: 181 */ "Das Wasser ist gesunken.\nSchade...")
          			  case 1:
/*<250>*/ 				printf(/* textboxtype: 1, unk: 1, line: 180 */ "Zum Glück ist der Wasserdrache wieder gesund.\nIch danke dir!")
          			}
          		  case 1:
/*<249>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "Dem Wasserdrachen geht es nicht gut,\ntu doch irgendwas!")
          		}
          	  case 1:
/*<252>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<247>*/ 			printf(/* textboxtype: 0, unk: 1, line: 178 */ "Der Wasserdrache ist eigentlich gutmütig,\naber wehe, wenn man ihn wütend macht...")
/*<253>*/ 			printf(/* textboxtype: 0, unk: 1, line: 175 */ "Aber verrate es niemandem sonst.")
          		  case 1:
/*<234>*/ 			printf(/* textboxtype: 0, unk: 1, line: 172 */ "Aaaah, bitte friss mich nicht!\n[1-]Bist du etwa...[2-]Keine Angst!")
/*<236>*/ 			switch (choice(2)) {
          			  case 0:
/*<241>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*<244>*/ 					printf(/* textboxtype: 1, unk: 1, line: 177 */ "Nein.<pause 30>\nSuchst du den Wasserdrachen?\n\n\nDer Wasserdrache ist eigentlich gutmütig,\naber wehe, wenn man ihn wütend macht...")
          					flw_239:
/*<239>*/ 					printf(/* textboxtype: 0, unk: 1, line: 175 */ "Aber verrate es niemandem sonst.")
/*<240>*/ 					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
          				  case 1:
/*<237>*/ 					printf(/* textboxtype: 1, unk: 0, line: 173 */ "Nein, ich bin nicht der Wasserdrache.<pause 30>\nDu suchst ihn?\n\n\nIch denke, ein Mensch mit einer\nWasserdrachenschuppe gilt als Freund.\nDaher sage ich dir etwas.")
/*<242>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 238, 'param3': 30}
/*<238>*/ 					printf(/* textboxtype: 1, unk: 1, line: 174 */ "Den Wasserdrachen findest du dort entlang.\nMarkiere dir diese Stelle irgendwie.")
/*<243>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 239, 'param3': 34}
          					goto flw_239
          				}
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 176 */ "Wirklich?<pause 15> Du frisst mich nicht? Puh...\n\n\n\nHier war so viel Lärm und Getöse, da habe\nich mich versteckt.")
          			}
          		}
          	}
          }

          void entrypoint_203_49() {
/*<564>*/ 	start()
/*<565>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10012:0x00000001>Gebieter, hörst du das auch?")
          }

          void entrypoint_203_50() {
/*<  4>*/ 	start()
/*<255>*/ 	set_camera(-1, 0)
/*<254>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "Meinen Glückwunsch, <0x10012:0x00000004>Gebieter.")
/*<256>*/ 	printf(/* textboxtype: 1, unk: 1, line: 81 */ "<0x10012:0x00000001>Gebieter, du hast die Prüfung bestanden.\nDein Schwert hat jetzt die Kraft, die nötig ist,\num die heilige Flamme zu finden.")
/*<258>*/ 	set_camera(2, 0)
/*<257>*/ 	printf(/* textboxtype: 0, unk: 1, line: 82 */ "Diese <color yellow<Wasserdrachenschuppe>coloroff> ist einer der Schätze\nder Göttin.\n\n\nDurch die Kraft des <color blue<Wasserdrachen >coloroff>kannst du dich\nnun frei im Wasser bewegen.")
/*<260>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "Die Flamme muss hier im Wald sein.\n<0x10012:0x00000001>Gebieter, ich vermute, dass sie sich an einem\nOrt befindet, den wir noch nicht entdeckt haben.")
          }

          void entrypoint_203_85() {
/*<490>*/ 	start()
/*<492>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "<0x10009:0x00070707>Möchtest du mich etwas fragen?\n[1-]Wie ist der\nFeuerdrache?[2-]Wie ist der\nDonnerdrache?[3-]Was ist mit\ndem Wald?[4]Nein...")
/*<491>*/ 	switch (choice(4)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 2, unk: 1, line: 138 */ "<0x10009:0x00070704>Ach, der...<pause 15>\nÄhnlich wie mich hat die Göttin ihn zu einem\nHüter, dem Hüter des Vulkans, gemacht.\n\nEin verschrobener Zeitgenosse, der am Krater\nlebt, wo es so heiß ist, dass sich Menschen\nund auch Kreaturen fernhalten.")
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 0, unk: 2, line: 139 */ "<0x10009:0x00070704>Er... Nun, was soll ich da sagen...<pause 15>\nEr hütet die Wüste im Auftrag der Göttin,\nganz ähnlich wie ich diesen Ort hüte.\n\nSelbst für einen Drachen ist er alt, achtet aber\nso gut wie gar nicht auf seine Gesundheit.<pause 15>\nIch frage mich, wie es ihm wohl geht...")
          	  case 2:
/*<495>*/ 		printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x00070704>Als die Menschen vor langer Zeit noch hier\nlebten, lebten sie im Einklang mit der Natur.\n\n\nAber findest du nicht auch, dass dieser Wald\nso ohne Menschen viel schöner ist?")
          	  case 3:
/*<496>*/ 		printf(/* textboxtype: 2, unk: 1, line: 141 */ "<0x10009:0x00070706>Vergiss nicht, deinen Geist weiter zu schulen.\nNur so kannst du den Auftrag der Göttin,\ndein Schicksal, erfüllen.")
          	}
          }

          void entrypoint_203_51() {
/*< 18>*/ 	start()
/*<349>*/ 	set_camera(15, 0)
/*<346>*/ 	set_camera(16, 0)
/*<347>*/ 	{'type': 'type3', 'subType': 2, 'param1': 35, 'param2': 356, 'next': 348, 'param3': 15}
/*<348>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 0, 'next': 29, 'param3': 13}
/*< 29>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 27, 'param3': 35}
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 99, 'next': 350, 'param3': 17}
/*<350>*/ 	printf(/* textboxtype: 55, unk: 1, line: 70 */ "Du hast den höchsten Punkt des Baumes erreicht.\n\n\n\nWenn du dich von hier aus umsiehst, kannst du\nvielleicht bisher unbekannte Gebiete entdecken.")
/*< 19>*/ 	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<566>*/ 	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
/*< 44>*/ 	make_actor_do_something(0, 0)
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 394, 'param3': 17}
/*<394>*/ 	set_camera(17, 0)
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 381, 'param3': 17}
/*<381>*/ 	printf(/* textboxtype: 2, unk: 0, line: 71 */ "<0x10012:0x00000001>Gebieter... Dort oben...")
/*<382>*/ 	set_camera(18, 0)
/*<386>*/ 	wait_frames(30)
/*<383>*/ 	printf(/* textboxtype: 1, unk: 2, line: 72 */ "Das ist ein bisher unbekannter Kyu.\n\n\n\nDas zuvor wahrgenommene Geräusch war mit einer\nWahrscheinlichkeit von 90 % sein Schnarchen.")
/*<384>*/ 	set_camera(19, 0)
/*<385>*/ 	wait_frames(30)
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 36}
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_86() {
/*<398>*/ 	start()
/*<399>*/ 	printf(/* textboxtype: 0, unk: 2, line: 115 */ "<0x10009:0x00090900>Ah!\nMeine Kraft ist zurück!")
          }

          void entrypoint_203_00() {
          	start()
/*< 81>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<541>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<542>*/ 			printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00010014>Du!!!\nHattest du nicht versprochen, dem\nWasserdrachen nichts zu sagen?!?\n\nAls der Wald überflutet wurde, dachte\nich schon, er würde mich mit Stumpf\nund Stiel fressen!\n\n<0x10009:0x00010007>Aber wenigstens sind wir jetzt diese\nlästigen Ungeheuer los und der Wald ist\nwieder friedlich.")
          			flw_540:
/*<540>*/ 			printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Ich geh wieder schlafen.")
          		  case 1:
/*<543>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00010001>Würde es helfen, wenn ich dich bitten\nwürde, damit aufzuhören?\n\n\n<0x10009:0x00010007>Der Wasserdrache hat dich für würdig\nbefunden? Alle Achtung!\n\n\nNatürlich wurde mir diese Ehre schon\nlange vor dir zuteil, ähem...")
          			goto flw_540
          		}
          	  case 1:
/*< 82>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<536>*/ 			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          			  case 0:
/*<538>*/ 				switch (adventure_pouch_has(7 0x0007)) {
          				  case 0:
/*<539>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00010001>Was ist denn nun schon wieder?\n\n\n\n<0x10009:0x00010007>Oh, das sieht mir aus wie das Wasser,\ndas der Wasserdrache möchte.\n\n\nWie wäre es, wenn du ihm sagst, dass\nich es für ihn gefunden habe? Na?")
          					goto flw_540
          				  case 1:
/*<544>*/ 					printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00010001>Von Manieren hältst du nichts, oder?\n\n\n\n<0x10009:0x00010006>Oh, der Wasserdrache will, dass du ihm\nheiliges Wasser bringst?\n\n\nDas sollte doch im Tempel zu finden sein...\nAn einem der Wasserfälle muss es das Wasser\ngeben, das der Wasserdrache verlangt.")
          					goto flw_540
          				}
          			  case 1:
/*<537>*/ 				printf(/* textboxtype: 1, unk: 1, line: 39 */ "<0x10009:0x00010001>Andere unbehelligt zu lassen geht\ngegen deine Natur, was?\n\n\n<0x10009:0x00010007>Ah, anscheinend konntest du das Tor\nzum See öffnen.\n\n\nWage es ja nicht, dem Wasserdrachen\nzu sagen, dass ich dir verraten habe,\nwie man es öffnet!")
          				goto flw_540
          			}
          		  case 1:
/*< 83>*/ 			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          			  case 0:
/*< 39>*/ 				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
          				  case 0:
/*< 40>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00010004>Du wieder...\nKann ich dir irgendwie helfen?\n[1-]Ja[2]Nein")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 2, line: 30 */ "<0x10009:0x00000003>Ergänze das Symbol auf dem Tor im\nsüdlichen Teil des Waldes und erfülle\nes mit der Kraft der Göttin.")
          						goto flw_37
          					  case 1:
/*< 43>*/ 						printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Ich geh wieder schlafen.")
          					}
          				  case 1:
          					goto flw_37
          				}
          			  case 1:
/*<356>*/ 				printf(/* textboxtype: 1, unk: 2, line: 3 */ "<0x10009:0x00000014>Wer stört?!?")
/*<375>*/ 				set_camera(20, 0)
/*<569>*/ 				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          				  case 0:
/*<570>*/ 					printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00010001><0x10006:0xfccd>Hm...<pause 15>\n<0x10006:0x00cd>Kenne ich dich nicht?\n[1-]Ja, klar![2-]Nein.")
/*<571>*/ 					switch (choice(2)) {
          					  case 0:
/*<575>*/ 						set_camera(18, 0)
/*<574>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000007>Ah, du spielst im <color red<Helden-Modus>coloroff>.\nNa, dann kennst du dich sicher schon aus...\n[1-]Natürlich...[2-]Vergessen...")
/*<576>*/ 						switch (choice(2)) {
          						  case 0:
/*<578>*/ 							entrypoint_203_10();
          						  case 1:
/*<577>*/ 							printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00000003>Wenn du das vergessen hast, dann\nstehen dir schwere Zeiten ins Haus.")
          							flw_378:
/*<378>*/ 							set_camera(20, 0)
          							flw_379:
/*<379>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00010006>Versprichst du mir, dass du niemandem\nverrätst, was ich dir nun erzähle?\n[1-]Klar![2-]Nö.")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_354:
/*<354>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00030008>Dann verrate ich dir jetzt, was sonst\nniemand weiß...")
          								flw_355:
/*<355>*/ 								set_camera(18, 0)
/*<364>*/ 								printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00030004>Die Flamme, die du suchst...<pause 15>\nMan nennt sie <sound 4><color blue<Farores Flamme>coloroff>...\n\n\n<0x10009:0x00010000>Diese Flamme...<pause 15>\nIhre Geschichte beginnt zu jener Zeit,\nda die Göttin noch unter uns wandelte.")
/*<365>*/ 								set_camera(21, 0)
/*<366>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000002>Sie vertraute die Flamme dem <color blue<Wasserdrachen\n>coloroff>an, der hier im <color blue<Wald von Phirone>coloroff> lebt.")
/*<367>*/ 								set_camera(22, 0)
/*<368>*/ 								printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x00000004>Es heißt, die Göttin hätte sie für <color blue<den,\nder vom Himmel kommt>coloroff>, in der Obhut\ndes Wasserdrachen zurückgelassen...")
/*<369>*/ 								set_camera(20, 0)
/*<370>*/ 								printf(/* textboxtype: 0, unk: 1, line: 22 */ "Und ich habe so das Gefühl, dass du das bist...\n\n\n\n<0x10009:0x00030009>Ich denke, du solltest dem Wasserdrachen mal\neinen Besuch abstatten.")
/*<371>*/ 								set_camera(23, 0)
/*<372>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "Der Wasserdrache, der die Flamme hütet,\nhaust im großen See im Süden des Waldes.")
/*<373>*/ 								set_camera(24, 0)
/*<374>*/ 								printf(/* textboxtype: 1, unk: 1, line: 24 */ "<0x10009:0x00000004>Das Tor zum See ist allerdings verschlossen,\num Unwürdige fernzuhalten.\n\n\n<0x10009:0x00000007>Aber ich erkläre dir, wie du es öffnen kannst.")
/*<407>*/ 								set_camera(25, 0)
/*<408>*/ 								printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00010004>Auf dem Tor ist ein Symbol.<pause 15> Du musst\nes mit der <color red<Kraft der Göttin >coloroff>erfüllen.\n\n\n<0x10009:0x00000009>Jedoch<pause 15> fehlt ein Teil des Symbols!\nDu musst es also vervollständigen!")
/*<409>*/ 								set_camera(18, 0)
/*<410>*/ 								printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00030001>Um herauszufinden, wie der fehlende\nTeil aussieht, musst du dieses Symbol\nhier irgendwo im Wald finden.")
          								goto flw_37
          							  case 1:
/*<380>*/ 								set_camera(18, 0)
/*< 22>*/ 								printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030014><0x10008:0x02cd>Was?!?\n\n\n\n<0x10009:0x00010006>Du schlägst mein Angebot aus, mein\nwertvolles Wissen mit dir zu teilen?\n[1-]Sag schon.[2-]Uninteressant!")
/*< 23>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_354
          								  case 1:
/*< 24>*/ 									printf(/* textboxtype: 1, unk: 1, line: 18 */ "<0x10009:0x0003000b><0x10008:0x02cd>Wie?!?\n\n\n\n<0x10009:0x00010003>Aber gut...<pause 15>\nDa du schon den ganzen Weg\ngekommen bist, sag ich es dir trotzdem.")
          									goto flw_355
          								}
          							}
          						}
          					  case 1:
/*<572>*/ 						printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000003>Ich hätte schwören können...\nNa, dann habe ich mich wohl getäuscht.")
/*<573>*/ 						set_camera(18, 0)
          						flw_363:
/*<363>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x00030006>Aber sag...<pause 15>\nWas will ein Mensch wie du eigentlich hier?\n[1-]Die Flamme.[2-]Nichts.")
/*<360>*/ 						switch (choice(2)) {
          						  case 0:
/*<361>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00010001>Du suchst die Flamme für dein Schwert,\num einen dir wichtigen Menschen finden\nzu können?\n\nHm...<pause 15>\nEin Mensch, der mich sehen kann und\nnach der Flamme sucht...")
          							goto flw_378
          						  case 1:
/*<396>*/ 							set_camera(20, 0)
/*<397>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00010014>Wie ich bereits sagte, wache ich von\nhier aus über den Wald. Ich sehe alles!\n\n\nDaher weiß ich auch, dass du die\nFlamme für dein Schwert suchst!")
          							goto flw_379
          						}
          					}
          				  case 1:
/*<357>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00010001>Oho, einen Menschen sieht man hier\nnicht alle Tage...\n\n\nIch bin ein <color blue<Einsiedler>coloroff> vom Volke der\nKyu und wache über diesen Wald.\n\n\n<0x10009:0x00010006>Ich weiß nicht, wie du es hierher\ngeschafft hast, aber kannst du mich\ndenn auch sehen?\n[1-]Ja[2-]Nein")
/*<358>*/ 					switch (choice(2)) {
          					  case 0:
/*<362>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000007>Und das, obwohl selbst die anderen\nKyu mich nicht sehen können...")
/*<377>*/ 						set_camera(18, 0)
          						goto flw_363
          					  case 1:
/*<376>*/ 						set_camera(18, 0)
/*<359>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x0003000b>Lüg mich nicht an!\n\n\n\n<0x10009:0x00010014>Erst verpasst du mir eins und behauptest dann,\ndass du mich nicht sehen kannst!")
          						goto flw_363
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_52() {
/*< 62>*/ 	start()
/*< 65>*/ 	story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
/*<468>*/ 	switch (temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<516>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 467, 'param3': 35}
/*<467>*/ 		set_camera(30, 0)
          		flw_64:
/*< 64>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 84, 'param3': 16}
/*< 84>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 0, line: 77 */ "Ich habe das Wasser verglichen<0x10006:0xfccd>...<pause 15>\n<0x10006:0x00cd><0x10012:0x00000001>Es gibt eine <sound 4><color red<Übereinstimmung>coloroff> mit dem\nWasser aus der Quelle.")
/*<186>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 36}
/*<517>*/ 			wait_frames(15)
/*<317>*/ 			temp_flags[2 /* 0x1 04 */] = true;
/*<470>*/ 			switch (temp_flags[3 /* 0x1 08 */]) {
          			  case 0:
/*<469>*/ 				set_camera(31, 0)
          				flw_183:
/*<183>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 185, 'param3': 16}
/*<185>*/ 				entrypoint_203_91();
          			  case 1:
          				goto flw_183
          			}
          		  case 1:
/*< 67>*/ 			printf(/* textboxtype: 2, unk: 0, line: 74 */ "Ich habe das verbliebene Wasser analysiert<0x10006:0xfccd>...<pause 15>\n<0x10006:0x00cd><sound 4>Es kann nun mit der <color red<Aurasuche >coloroff>aufgespürt werden.")
/*<568>*/ 			open_dowsing_wheel(5)
/*<567>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<230>*/ 			switch (adventure_pouch_has(1 0x0001)) {
          			  case 0:
/*<231>*/ 				printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10012:0x00000001>Gebieter, du besitzt eine <color yellow<leere Flasche>coloroff>.\nDarin kannst du das Wasser transportieren.")
          				flw_66:
/*< 66>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 36}
/*<297>*/ 				wait_frames(15)
/*<462>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 294, 'param3': 16}
/*<294>*/ 				set_camera(12, 0)
/*<293>*/ 				printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x00000005>Folge diesem Weg in den Wald von Phirone.")
/*<471>*/ 				switch (temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*<295>*/ 					set_camera(-1, 0)
          					flw_184:
/*<184>*/ 					printf(/* textboxtype: 0, unk: 2, line: 106 */ "<0x10009:0x00090706>Nun beeile dich!\nIch warte nicht gern!")
/*<461>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<472>*/ 					set_camera(27, 0)
          					goto flw_184
          				}
          			  case 1:
/*<229>*/ 				printf(/* textboxtype: 1, unk: 2, line: 75 */ "<0x10012:0x00000001>Gebieter, du besitzt keine Möglichkeit, das Wasser\nzu transportieren. Wir benötigen ein Gefäß.")
          				goto flw_66
          			}
          		}
          	  case 1:
/*< 63>*/ 		{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 64, 'param3': 35}
          		goto flw_64
          	}
          }

          void entrypoint_203_87() {
/*<400>*/ 	start()
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 116 */ "Sieh hin!\nDies ist meine wahre Gestalt!\n\n\nVor dir steht der Wasserdrache <color blue<Phirone>coloroff>,\nim Namen der Göttin Hüterin dieses Landes!")
          }

          void entrypoint_203_01() {
/*<  1>*/ 	start()
/*<413>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<414>*/ 		printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00000007>Diese schrecklichen Eindringlinge sind\nendlich weg! Alles ist wieder gut!\n\n\n<0x10009:0x00000004>Hoffentlich findest du deine Freundin bald,\ndann wird Macha sich genauso freuen wie jetzt!")
          	  case 1:
/*<415>*/ 		printf(/* textboxtype: 1, unk: 1, line: 42 */ "<0x10009:0x00000001>Da bist du ja wieder!\nHast du deine Freundin gefunden?\n[1-]Wer bist du?[2-]Noch nicht...")
/*<533>*/ 		switch (choice(2)) {
          		  case 0:
/*<534>*/ 			printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00110013>Och...<pause 30> Du hast es vergessen...\n\n\n\n<0x10009:0x000b0004>Weißt du, wie du uns unterscheidest?\nZeige auf der Karte auf uns und unsere\nNamen erscheinen.")
          		  case 1:
/*<535>*/ 			printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00110013>Oh...\nHoffentlich findest du sie genauso\nschnell, wie du uns Kyu gefunden hast.")
          		}
          	}
          }

          void entrypoint_203_53() {
/*< 75>*/ 	start()
/*<221>*/ 	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 220, 'param3': 35}
/*<220>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 227, 'param3': 16}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "")
/*<222>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 228, 'param3': 36}
/*<228>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_70() {
/*<159>*/ 	start()
/*<158>*/ 	printf(/* textboxtype: 1, unk: 0, line: 188 */ "Verehrte Phai! Ich bin so schnell\ngekommen, wie ich nur konnte!")
          }

          void entrypoint_203_88() {
/*<402>*/ 	start()
/*<545>*/ 	switch (temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*<546>*/ 		printf(/* textboxtype: 0, unk: 2, line: 118 */ "<0x10009:0x00090700>Du hast mir das <color blue<heilige Wasser >coloroff>gebracht,\nMenschenkind.\n\n\nMir scheint, es war nicht nur Zufall, dass du\ndir die <color blue<Wasserdrachenschuppe >coloroff>verdient und\ndie Prüfung der Göttin bestanden hast.")
          	  case 1:
/*<547>*/ 		printf(/* textboxtype: 2, unk: 0, line: 117 */ "<0x10009:0x00090700>Du hast mir das <color blue<heilige Wasser >coloroff>gebracht,\nMenschenkind.\n\n\nMir scheint, es war nicht nur Zufall, dass du\ndir die <color blue<Wasserdrachenschuppe >coloroff>verdient und\ndie Prüfung der Göttin bestanden hast.")
          	}
          }

          void entrypoint_203_54() {
/*< 76>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 1, unk: 2, line: 78 */ "Die Wahrscheinlichkeit, dass dies das Symbol ist,\nvon dem der Einsiedler sprach, beträgt 80 %.")
/*<232>*/ 	set_camera(26, 0)
/*<437>*/ 	printf(/* textboxtype: 0, unk: 1, line: 79 */ "Ich schlage vor, dass du dir dieses Symbol\ngut einprägst.")
/*<438>*/ 	wait_frames(15)
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 	wait_frames(15)
          }

          void entrypoint_203_71() {
/*<161>*/ 	start()
/*<179>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<180>*/ 		printf(/* textboxtype: 0, unk: 1, line: 190 */ "Wieder dieser <color red<Wasserbehälter>coloroff>...<pause 15>\nAber ich mach das schon!")
          	  case 1:
/*<160>*/ 		printf(/* textboxtype: 1, unk: 1, line: 189 */ "Oh, das ist aber groß...<pause 15>\nAber kein Problem für mich!")
          	}
          }

          void entrypoint_203_89() {
/*<403>*/ 	start()
/*<404>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x00070700>Wie versprochen werde ich dir den Weg\nzur <color red<heiligen Flamme >coloroff>zeigen.\n\n\nFolge mir.")
/*<405>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_203_02() {
/*<416>*/ 	start()
/*<417>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<418>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0009000c>Alle sagen, dass hier im Wald wieder Frieden\neingekehrt ist. <color blue<Kombu>coloroff> glaubt das nicht!\n\n\n<0x10009:0x00070013>Gibt es nicht irgendwo ein sicheres Plätzchen?\nKombu hofft, dass wir irgendwann in Frieden\nleben werden.")
          	  case 1:
/*<419>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x0009000c>Wie lange muss <color blue<Kombu>coloroff> noch in Angst leben?\n\n\n\n<0x10009:0x00070013>Gibt es nicht irgendwo ein sicheres Plätzchen?\nKombu hofft, dass wir irgendwann in Frieden\nleben werden.")
          	}
          }

