          void entrypoint_202_04() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Frappe la gemme qui se cache au\ncreux des yeux. La bouche se\nfermera et le courant s'arrêtera.")
          }

          void entrypoint_202_05() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Les symboles gravés sur la <color red<grande\nstatue de pierre >coloroff>dictent les <color red<règles\n>coloroff>de ce lieu.\n\nEn premier vient le <color red<dos>coloroff>, puis le\n<color red<séant>coloroff>, le <color red<dos de la main droite >coloroff>et\nenfin le <color red<dos de la main gauche>coloroff>.")
/*< 48>*/ 	story_flags[1195 /* us: 805A9B61 0x02, jp: 805ACDE1 0x02 */] = true;
          }

          void entrypoint_202_11() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Selon nos expériences antérieures, la <color yellow<clé >coloroff>dont il est\nfait mention ici est celle qui ouvre le mécanisme\ndevant nous.")
          }

          void entrypoint_202_12() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 0, unk: 2, line: 10 */ "")
          }

          void entrypoint_202_13() {
/*<  9>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nJe détecte un grand coffre.\n\n\n\nLa probabilité qu'il contienne la <color yellow<clé >coloroff>qui ouvre la porte\nsituée en haut de la statue est de 85 %.")
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
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Quelle obstination.<pause 5>.<pause 5>.")
/*< 19>*/ 	set_camera(3, 0)
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "J'ai besoin de temps pour trouver le moyen\nde rappeler mon maître à la vie.<pause 5>.<pause 5>.")
/*< 20>*/ 	set_camera(4, 0)
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3334, 'param2': 512, 'next': 23, 'param3': 13}
/*< 23>*/ 	wait_frames(30)
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "Pourquoi faut‐il toujours que des trouble-fête\ncomme toi viennent se mettre dans mes pattes?\nHMM? Je sens ma pression monter.")
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
/*< 13>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Maître, je détecte dans la partie supérieure un\nmécanisme ressemblant à une porte avec serrure.")
/*< 43>*/ 	scene_flags[12 'Faron: Ancient Cistern'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_202_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 7, line: 1 */ "Frappe les <color red<quatre pierres >coloroff>dans le\nbon ordre. La voie s'ouvrira à celui\nqui suivra les <color red<règles>coloroff> de ce lieu.")
          }

          void entrypoint_202_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 7, unk: 0, line: 3 */ "Rends à la statue sa forme\npremière et descends le fil vers\nle fond de la terre. La <color yellow<clé>coloroff> qui\nouvrira le chemin t'y attend.")
          }

          void entrypoint_202_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 7, line: 4 */ "Cherche la <color yellow<clé>coloroff> qui sommeille\nau fond de la terre.")
          }

