          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 6, unk: 0, line: 3 */ "<icon 20> Statue de la Déesse ")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 22, unk: 0, line: 21 */ "Salle de bain")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 2, unk: 0, line: 72 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nGrâce à l'amélioration de votre épée,\nvous pouvez désormais <color red<détecter >coloroff>les\n<color yellow<cristaux de gratitude>coloroff>.\n\nJ'ai ajouté les <color yellow<cristaux de gratitude >coloroff>à la\nliste des cibles à <color red<détecter>coloroff>. <sound 4>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf(/* textboxtype: 2, unk: 0, line: 73 */ "Je vois que vous avez collecté tous\nles cristaux de gratitude, <0x10012:0x00000002>Maître.\nFélicitations.")
          	  case 1:
/*< 64>*/ 		printf(/* textboxtype: 2, unk: 0, line: 71 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nGrâce à l'amélioration de votre épée,\nvous pouvez désormais <color red<détecter >coloroff>les\n<color yellow<cristaux de gratitude>coloroff>.\n\nJ'ai ajouté les <color yellow<cristaux de gratitude\n>coloroff>à la liste des cibles à <color red<détecter>coloroff>. <sound 4>\nFaites‐en bon usage.")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 8, unk: 0, line: 40 */ "La soupe de citrouille se\ndéguste bien chaude!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 6, unk: 0, line: 4 */ "<icon 20> Grand‐place de Célesbourg")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 22, unk: 0, line: 22 */ "Salle d'escrime")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nLes célestriers ne volent pas\nla nuit. Vous devriez vous reposer\net repartir quand le jour se lèvera.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 6, unk: 0, line: 5 */ "<icon 20> École de chevalerie")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 75 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nL'<color red<entrée de l'épreuve >coloroff>qu'ouvre le\nChant du héros se trouve sur une\nde ces îles dans le ciel.\n\nUtilisez la <color red<fonction détection >coloroff>pour\ntrouver son emplacement exact.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 22, unk: 0, line: 23 */ "<0x10008:0x00cd>Maison de Panalie\n<0x10008:0xffcd>Gérante de la consigne")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 8, unk: 0, line: 41 */ "Urgent! Cherche\nmain‐d'œuvre pour labourer\nle champ de citrouilles.")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 8, unk: 0, line: 6 */ "Il est interdit de courir\ndans les couloirs!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 22, unk: 0, line: 24 */ "Maison de Jonalie")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf(/* textboxtype: 2, unk: 0, line: 76 */ "Toutes mes félicitations, <0x10012:0x00000001>Maître.\n\n\n\nVous avez réussi toutes les\népreuves!")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf(/* textboxtype: 2, unk: 0, line: 77 */ "Le <color red<joyau des épreuves >coloroff>que vous\nvenez d'obtenir est en fait un\nélément d'une paire.\n\nQuelque part sur cette île\nse trouve un joyau identique\nau vôtre, <0x10012:0x00000002>Maître.\n\nEn plaçant votre joyau à\nl'endroit où la paire sera\ncomplétée, vous pourrez ouvrir\nle chemin vers la <color yellow white<Triforce>coloroff>.\n<0x1000A:0xffff00cd>Je vous conseille de\nchercher le deuxième joyau.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 8, unk: 0, line: 42 */ "Célesbourg se trouve à\nquelques battements d'ailes\nau nord‐ouest d'ici!")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 22, unk: 0, line: 25 */ "Maison de Picalia")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 8, unk: 0, line: 8 */ "Prière de monter les\ncélestriers depuis les\nplates‐formes prévues\nà cet effet!")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 8, unk: 0, line: 43 */ "Grida + O...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 22, unk: 0, line: 26 */ "Maison d'Hiron\net d'Orielle")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 8, unk: 0, line: 7 */ "Prière de ranger\nvos chambres!")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf(/* textboxtype: 2, unk: 0, line: 78 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nCette île figure dans ma mémoire.\n\n\n\nIl s'agit de l'<color blue<île aux chants>coloroff>.\nIl est probable qu'elle ait été\nbâtie pour vous par la Déesse.\n\nCependant, l'entrée de la tour n'est\npas accessible. Je vous conseille\nd'examiner les environs.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 7, unk: 0, line: 44 */ "Fais tourner le piédestal central\npour former le pont qui te\npermettra d'entrer dans la tour\nde l'île aux chants.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf(/* textboxtype: 22, unk: 0, line: 27 */ "<0x10008:0x00cd>Maison de Rupin\n<0x10008:0xffcd>Armurier")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf(/* textboxtype: 2, unk: 0, line: 79 */ "<0x10012:0x0000000b>Maître <heroname>.\nJe confirme qu'une deuxième colonne\nde lumière est apparue au nord‐est.\n\nVous pouvez descendre vers de\nnouvelles terres. Une fois que vous\nserez prêt, je vous conseille de vous\ny rendre.")
          }

          void entrypoint_107_44() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 6, unk: 0, line: 45 */ "Le bazar est fermé pour la\nnuit. Nous serons heureux\nde vous accueillir dès\ndemain matin.\nSi vous avez un problème\nurgent, venez nous voir dans\nnos résidences respectives.\nLes commerçants du bazar")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 22, unk: 0, line: 9 */ "Chambre de <heroname>")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf(/* textboxtype: 22, unk: 0, line: 28 */ "Maison de Kiko")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10012:0x0000000b>Maître <heroname>.\nJe confirme qu'une troisième colonne\nde lumière est apparue au sud‐ouest.\n\nVous pouvez descendre vers de\nnouvelles terres. Une fois que vous\nserez prêt, je vous conseille de vous\ny rendre.")
          }

          void entrypoint_107_45() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 9, unk: 0, line: 46 */ "N'oubliez pas de vous\nlaver les mains!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 22, unk: 0, line: 10 */ "Chambre d'Hergo")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf(/* textboxtype: 22, unk: 0, line: 29 */ "<0x10008:0x00cd>Maison de Caïk\n<0x10008:0xffcd>Diseur de bonne aventure")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 2, unk: 0, line: 81 */ "<0x10012:0x0000000b>Maître <heroname>.\n\n\n\nPour débarrasser le grand Narisha du\nmal qui l'habite, vous devez d'abord\nmaîtriser l'attaque tornade.\n\nArfan vous attend à la plate‐forme\nau nord‐est de Célesbourg, près de\nla <color red<statue d'oiseau en pierre>coloroff>.\n\nJe vous conseille de vous y rendre au\nplus vite.")
          }

          void entrypoint_107_46() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 9, unk: 0, line: 47 */ "Faites le ménage\nrégulièrement!")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf(/* textboxtype: 22, unk: 0, line: 11 */ "Chambre d'Orbo et Latruche")
          }

          void entrypoint_107_64() {
/*<172>*/ 	start()
/*<174>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf(/* textboxtype: 2, unk: 0, line: 82 */ "<0x10012:0x0000000b>Maître <heroname>.\n\n\n\n<0x1000A:0x000d00cd>Le coffre que vous voyez là est une\nrelique laissée par la Déesse dans les\ntemps anciens pour le héros à venir.")
/*<178>*/ 		set_camera(-1, 0)
/*<177>*/ 		printf(/* textboxtype: 2, unk: 0, line: 84 */ "Une fois que l'énergie d'un <color red<cube de\nla Déesse>coloroff> est envoyée dans le ciel,\nil devrait être possible d'ouvrir le\ncoffre correspondant.\nChaque cube de la Déesse que vous\nenverrez dans le ciel sera une nouvelle\naide pour vous, Maître.")
          	  case 1:
/*<173>*/ 		printf(/* textboxtype: 2, unk: 0, line: 82 */ "<0x10012:0x0000000b>Maître <heroname>.\n\n\n\n<0x1000A:0x000d00cd>Le coffre que vous voyez là est une\nrelique laissée par la Déesse dans les\ntemps anciens pour le héros à venir.")
/*<179>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf(/* textboxtype: 2, unk: 0, line: 83 */ "Toutefois, j'ignore comment\nl'ouvrir. Je n'ai pas suffisamment\nd'informations à ce sujet.")
          	}
          }

          void entrypoint_107_47() {
/*<186>*/ 	start()
/*<187>*/ 	printf(/* textboxtype: 6, unk: 0, line: 48 */ "Parti travailler. Repassez\nme voir la nuit.\n<0x10006:0x05cd>                                 - Beedle")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 22, unk: 0, line: 12 */ "Chambre de Libri")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 7, unk: 0, line: 30 */ "Sous la lumière, joue le chant\ntransmis par la Déesse.\nAlors une lueur se dévoilera\nau héros.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 22, unk: 0, line: 13 */ "Bureau de M. Gaepora")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 22, unk: 0, line: 31 */ "<0x10008:0x00cd>Maison de Gondo\n<0x10008:0xffcd>Rénovateur")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 22, unk: 0, line: 14 */ "Chambre d'Arfan")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 22, unk: 0, line: 32 */ "<0x10008:0x00cd>Maison de Darin\n<0x10008:0xffcd>Vendeur de potions")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 2, unk: 0, line: 50 */ "<0x10012:0x00000004>Maître <heroname>, ce <color red<faisceau\nvert >coloroff>est une <color blue<colonne de lumière >coloroff>qui\nvous permet de traverser les nuages.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf(/* textboxtype: 2, unk: 2, line: 51 */ "Veuillez consulter votre carte\npour connaître votre position\npar rapport à Célesbourg.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf(/* textboxtype: 2, unk: 0, line: 52 */ "Vous pouvez traverser les nuages au\npied de cette colonne de lumière.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 22, unk: 0, line: 15 */ "Chambre d'Hulul")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 22, unk: 0, line: 33 */ "Maison de Morcégo")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 2, unk: 0, line: 53 */ "<0x10012:0x00000001>Maître, je confirme que la stèle que\nvous avez placée hier soir dans la\nstatue de la Déesse a ouvert un passage\nvers la terre.\nUne colonne de lumière est apparue\ndans le ciel, au sud. Mon analyse\nindique que vous pourrez y traverser\nles nuages.")
/*< 66>*/ 	printf(/* textboxtype: 2, unk: 0, line: 54 */ "Si vous allez sur terre muni\nuniquement d'une épée, vos\nchances de survie sont faibles.\n\nSi ce n'est déjà fait, je vous conseille\nd'acheter des <color red<potions >coloroff>et un <color red<bouclier >coloroff>au\nbazar avant de partir.")
/*<164>*/ 	printf(/* textboxtype: 2, unk: 0, line: 55 */ "Autre chose, <0x10012:0x00000001>Maître.\n\n\n\nSi vous êtes désormais à l'aise\navec les commandes, vous pouvez\nchanger l'<color red<affichage >coloroff>à l'écran.\n\nL'<color red<option d'affichage >coloroff>se trouve sur\nl'<color blue<écran d'inventaire>coloroff>. Sélectionnez\nce qui vous convient le mieux.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<168>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<169>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 22, unk: 0, line: 16 */ "Chambre de Grida")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 8, unk: 0, line: 34 */ "Carte de Célesbourg\nN : Statue de la Déesse,\nO : École, E : Résidences,\nS : Grand‐place")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 56 */ "<0x10012:0x00000001>Maître... J'aperçois une colonne de\nlumière au loin.")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf(/* textboxtype: 2, unk: 0, line: 57 */ "Sautez dans le vide en direction de\ncette colonne de lumière et pendant\nvotre chute, sifflez votre célestrier.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf(/* textboxtype: 2, unk: 0, line: 58 */ "Veuillez partir à la recherche de dame\nZelda. Appuyez sur (v) en chute libre\npour appeler votre célestrier.<0x10011:0x09cd>")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 22, unk: 0, line: 17 */ "Chambre de Zelda")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 8, unk: 0, line: 35 */ "Notre soupe de citrouille,  \nça bat la soupe aux nouilles!\nSeulement 10 rubis le flacon!")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 6, unk: 0, line: 0 */ "Grotte de la chute\nAttention aux chauves‐souris!\nEntrée interdite aux enfants.")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf(/* textboxtype: 8, unk: 0, line: 19 */ "Le gagnant de la chevauchée\ncéleste est <heroname>!\nMalheureusement, il y a aussi\nde mauvaises nouvelles...")
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 8, unk: 0, line: 18 */ "La chevauchée céleste a lieu\naujourd'hui! Soutenez Hergo,\n<heroname>, Latruche et\nOrbo. Que le meilleur gagne!")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<188>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 2, unk: 0, line: 61 */ "<0x10012:0x00000004>Maître <heroname>, veuillez\nplacer la <color red<stèle >coloroff>que je vous ai\nremise dans le piédestal.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 59 */ "<0x10012:0x00000004>Maître <heroname>, frappez cet\nemblème avec l'<color red<éclat céleste >coloroff>puis\nplacez‐y la stèle que je vous ai remise.\n\nPour invoquer l'<color red<éclat céleste>coloroff>,\n<color green<brandissez votre épée vers le ciel\n>coloroff>afin d'invoquer le pouvoir des cieux.")
          		  case 1:
/*< 69>*/ 			printf(/* textboxtype: 2, unk: 0, line: 60 */ "Mon nom est <color blue<Fay>coloroff>... Placez‐vous\ndevant ce socle et retirez l'épée\nqui y est plantée.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf(/* textboxtype: 8, unk: 0, line: 37 */ "Récital de Tironne\nReprésentations selon les\ndisponibilités du musicien.")
          	  case 1:
/*<142>*/ 		printf(/* textboxtype: 8, unk: 0, line: 36 */ "Récital de Tironne\nEn pause jusqu'à nouvel\nordre. Cherchons musicien.")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 6, unk: 0, line: 1 */ "<icon 22> École de chevalerie\n    Quartier résidentiel <icon 23>")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10012:0x00000004>Maître <heroname>.\n\n\n\nJe détecte dans le ciel l'énergie\nlibérée lorsque vous avez frappé\nde l'<color red<éclat céleste >coloroff>les <color red<cubes de la\nDéesse >coloroff>dispersés sur terre.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	wait_frames(60)
/*< 56>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "Les endroits d'où provient cette\nénergie sacrée sont indiqués sur\nvotre carte.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf(/* textboxtype: 2, unk: 0, line: 65 */ "Je vous conseille d'explorer ces\nrégions de la carte.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 8, unk: 0, line: 38 */ "Vous pouvez admirer le\nfameux lustre de la Citrouille\nperchée depuis le 1<0x30000:0x>er  étage.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 6, unk: 0, line: 2 */ "<icon 20> Bazar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 22, unk: 0, line: 20 */ "Toilettes")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0, line: 70 */ "Cette pousse mettrait des années\nà grandir ici. Je vous conseille de\nla planter ailleurs.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 8, unk: 0, line: 39 */ "Pour éviter de faire tomber\nle lustre, prière de ne pas\nse bousculer ici.")
          }

