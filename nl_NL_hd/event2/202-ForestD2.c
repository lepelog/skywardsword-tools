          void entrypoint_202_04() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Een edelsteen schijnt fel diep in\nhet oog. Sla ertegen om de mond\nte sluiten en de stroom in te\ndammen.")
          }

          void entrypoint_202_05() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "In het <color red<grote standbeeld >coloroff>staan\nsymbolen gebeiteld die de <color red<geheime\nvolgorde >coloroff>van deze tempel\nonthullen.\nEerst de <color red<rug>coloroff>, dan het <color red<achterste>coloroff>, dan\nde <color red<rug van de rechterhand>coloroff>, gevolgd\ndoor de <color red<rug van de linkerhand>coloroff>.")
/*< 48>*/ 	story_flags[1195 /* us: 805A9B61 0x02, jp: 805ACDE1 0x02 */] = true;
          }

          void entrypoint_202_11() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Naar aanleiding van de patronen die we\ntot nu toe hebben gezien, concludeer ik\ndat de <color yellow<sleutel>coloroff> die op het stenen bord wordt\ngenoemd, benodigd is voor dit apparaat.")
          }

          void entrypoint_202_12() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 0, unk: 2, line: 10 */ "")
          }

          void entrypoint_202_13() {
/*<  9>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10012:0x0000000b>Meester, ik heb belangrijk nieuws voor u\ndat u zeker wilt horen. Er bevindt zich\neen speciale schatkist in dit gebied.\n\nIk acht het 85% zeker dat deze de <color yellow<sleutel>coloroff>\nbevat die de deur opent op de top van het\nstenen beeld.")
          }

          void entrypoint_202_30() {
/*< 14>*/ 	start()
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1007, 'next': 17, 'param3': 24}
/*< 17>*/ 	set_camera(1, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 32, 'param3': 32}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3330, 'param2': 256, 'next': 18, 'param3': 13}
/*< 18>*/ 	set_camera(2, 0)
/*< 36>*/ 	wait_frames(30)
/*< 33>*/ 	make_actor_do_something(0, 13)
/*< 35>*/ 	wait_frames(30)
/*< 26>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3331, 'param2': 512, 'next': 15, 'param3': 13}
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Je geeft niet snel op,<pause 5> hè?")
/*< 19>*/ 	set_camera(3, 0)
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Ik ben druk naar aanwijzingen aan het\nzoeken die me zullen helpen met het\nterugbrengen van de demonenkoning.")
/*< 20>*/ 	set_camera(4, 0)
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3334, 'param2': 512, 'next': 23, 'param3': 13}
/*< 23>*/ 	wait_frames(30)
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "Dat je me onophoudelijk lastigvalt terwijl\nik het zo druk heb, vind ik bijzonder\nstorend. En ik krijg er een erg slecht\nhumeur door.")
/*< 34>*/ 	make_actor_do_something(1, 13)
/*< 37>*/ 	wait_frames(15)
/*< 27>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3332, 'param2': 768, 'next': 39, 'param3': 13}
/*< 39>*/ 	wait_frames(2)
/*< 21>*/ 	set_camera(5, 0)
/*< 29>*/ 	wait_frames(63)
/*< 31>*/ 	wait_frames(40)
/*< 41>*/ 	zone_temp_flags[18 /* 0x3 04 */] = true;
/*< 24>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_202_14() {
/*< 10>*/ 	start()
/*< 42>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 46}
/*< 13>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Meester, ik ben zo vrij geweest om te\nbevestigen dat er een deur is in het\nhoogste deel van dit beeld. Het slot ervan\nherken ik niet.")
/*< 43>*/ 	scene_flags[12 'Faron: Ancient Cistern'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_202_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 7, line: 1 */ "Raak de <color red<in vier richtingen\nwijzende edelstenen >coloroff>op de juiste\nmanier. De <color red<geheime volgorde>coloroff> zal\nde weg voor je openen.")
          }

          void entrypoint_202_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 7, unk: 0, line: 3 */ "Verander de stenen reus terug\nnaar zijn oorspronkelijke vorm en\nga terug de diepte in. Daar vind\nje de <color yellow<sleutel >coloroff>die je nodig hebt.")
          }

          void entrypoint_202_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 7, line: 4 */ "Zoek de <color yellow<sleutel >coloroff>die zich diep onder\nde grond bevindt.")
          }

