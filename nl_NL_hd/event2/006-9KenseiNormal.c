          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf("Daarnaast kunt u met uw <y<grijpklauwen\n>>klimop vastpakken en u zich er zo vanaf\neen afstand naartoe trekken.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf("U kunt op uw <b<kaart>> zien waar Beedles\nwolkenwinkel nu is. Om toegang te\nkrijgen moet u de <r<grote bel>> luiden die\neronder hangt.")
          	  case 1:
/*< 57>*/ 		printf("Om <b<Beedles>> wolkenwinkel binnen te\nkunnen gaan dient u wellicht de <r<grote bel\n>>te luiden die eronder hangt.\n\n\x0E\x01\x12\x04\x00\x02Meester, helaas beschikt u niet over het\njuiste <r<gereedschap>> om de bel te luiden. U\nheeft iets nodig om de bel vanaf een\nafstand te raken.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Op de kleine eilandjes rond <b<Skyloft>> kunt\nu oeroude bouwwerken tegenkomen.\n<b<\n\n>>Ik acht de kans meer dan 80% dat er op\ndie eilandjes schatkisten verborgen zijn.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf("Ik acht het nu voor 95% zeker dat de\ngeruchten over <b<Vleros>> gaan, die onder de\nschuur bij de begraafplaats woont.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf("Vleros heeft genoeg <y<dankbaarheids-\nkristallen>> om een mens te worden. Ik acht\nde kans 60% dat de monstergeruchten nu\nverdwijnen.\nEr blijft een kans van 40% dat de\ngeruchten niet verdwijnen, omdat mensen\nsterk overtuigd kunnen zijn van spook-\nverhalen.")
          		  case 1:
/*< 37>*/ 			printf("Vleros heeft u gevraagd om\n<y<dankbaarheidskristallen>> te verzamelen, in\nde hoop dat die hem in een mens kunnen\nveranderen.\nAls u hem hierbij helpt, \x0E\x01\x12\x04\x00\x02meester, is er een\nkans van 85% dat het u ook iets oplevert.")
          		}
          	  case 1:
/*< 34>*/ 		printf("Als u hier meer over wilt weten, is mijn\nadvies om naar de<b< Oranje Poen>>, te gaan,\nomdat de geruchten daar vandaan komen.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf("De ridder in spe <b<Struiz >>zoekt regelmatig\nhet hemelrijk af om dit eiland te vinden.\n\n\nOnlangs schijnt hij <b<in de donderwolk>> een\neiland gevonden te hebben dat geschikt is\nvoor insecten.")
          	  case 1:
/*<  2>*/ 		printf("Er zijn echter geen verslagen van mensen\ndie het daadwerkelijk hebben bezocht.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf("<b<Pijlen>> die geen doelwit raken, kunnen\nopnieuw worden opgepakt.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf("Uw arm is sterk genoeg om de stammen\nvan kleine boompjes door te kunnen\nhakken met je zwaard.\n\nAls een deel van een boom gloeit, moet u\ndat deel proberen te raken om een rupee\nte ontvangen.")
          		}
          	  case 1:
          		goto flw_45
          	}
          }

          void entrypoint_006_904() {
/*<  4>*/ 	start()
/*<  5>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*<  8>*/ 		switch (has_rupees(20)) {
          		  case 0:
/*<  7>*/ 			printf("Hier is een attractie waar u met relatief\nweinig inspanning veel rupees kunt\nwinnen.\n\nDaarbij moet u er wel voor zorgen dat uw\nbeurs niet vol is, anders kunt u uw prijs\nniet meenemen.")
          		  case 1:
/*<  9>*/ 			printf("Hier is een attractie waar u met relatief\nweinig inspanning veel rupees kunt\nwinnen.\n\nVolgens mijn gegevens moet u betalen om\nmee te kunnen doen.")
          		}
          	  case 1:
/*<  6>*/ 		printf("Er wordt hier een attractie gebouwd waar\nu met relatief weinig inspanning veel\nrupees kunt winnen.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf("Technisch gezien is de volgende\ninformatie geen gerucht, maar ik zal dit\ntoch met u delen.\n\nAls u een <r<godinnenblok>> activeert, ben ik\nin staat de energie te volgen die de lucht\nin schiet.\n\nOp basis van het traject zal ik op uw\nkaart aangeven waar in het hemelrijk de\nenergie heen is gegaan, \x0E\x01\x12\x04\x00\x02meester.")
          	  case 1:
/*< 53>*/ 		printf("Herinnert u zich de <r<mysterieuze blokken\n>>met het teken van de godin die her en der\nover het oppervlak zijn verspreid?\n\nEr schijnt een connectie te zijn tussen die\nblokken en de gesloten schatkisten die je op\n<b<Skyloft>> en de omliggende eilanden kunt\nvinden.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf("Beedles wolkenwinkel bevindt zich na\nzonsondergang niet meer boven <b<Skyloft>>.\nWaarschijnlijk bevindt hij zich 's nachts\nop een ander eiland.\n<r<Als u in de winkel blijft tot de avond valt>>,\nontdekt u wellicht waar hij naartoe gaat.")
          	  case 1:
/*< 30>*/ 		printf("\x0E\x01\x12\x04\x00\x02Meester, helaas beschikt u niet over het\njuiste <r<gereedschap>> om de bel mee te\nluiden. U heeft iets nodig om de bel vanaf\neen afstand te raken.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf("In een ver verleden heeft een krijger\neen manier bedacht om veel pijlen te\nvergaren. Bent u met deze techniek\nbekend, \x0E\x01\x12\x04\x00\x02meester?\n[1]Vertel, vertel![2-]Ken ik al.")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("De krijger pakte haar <b<houten schild>> in de\nhand en begaf zich richting het fort van\nde Bokoblins.\n\nZe bleef verscholen achter haar schild\nterwijl de Bokoblins pijlen op haar neer\nlieten regenen. Daarna trok ze zich veilig\nterug.\nHaar schild <r<zat vol pijlen>>. Ze kon die\npijlen eruit halen en met haar eigen boog\nterugschieten naar de vijand.")
          				flw_14:
/*< 14>*/ 				printf("U kunt deze strategie zelf proberen met\nuw eigen houten schild, \x0E\x01\x12\x04\x00\x02meester.\n\n\nHierbij zal uw schild wel beschadigd\nraken, dus let op <r<schildmeter>>.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf("<b<Vogelveren>> vormen een nuttig materiaal\nvoor het verbeteren van uw uitrusting.\n\n\nHet is echter voor 90% zeker dat u een\nbepaald gereedschap nodig heeft om\nvogels met dit soort veren te vangen.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf("Als u met een <b<waterdrakenschub >>terug-\nkeert op een plek met veel water, is het\nmogelijk dat u nieuwe gebieden ontdekt.\n\nAangezien u dit object al heeft, bent u\nmomenteel in staat diep te duiken.")
          	  case 1:
/*< 20>*/ 		printf("Ergens in de wereld schijnt een object te\nzijn dat een <b<waterdrakenschub>> heet.\nVolgens geruchten stelt dit mensen in\nstaat diep te duiken.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf("Aangezien u deze <b<vuurwerende oorbellen>>\nreeds bezit, bent u in staat gebieden met\nextreem hoge temperaturen te bezoeken.\n\nMijn advies is om gebieden die eerder te\nheet waren, nu grondig te doorzoeken.")
          	  case 1:
/*< 24>*/ 		printf("Er schijnen <b<vuurwerende oorbellen >>te\nbestaan, die de drager beschermen tegen\nextreme hitte.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf("Als u te dicht bij Levias komt, bestaat het\ngevaar dat uw Loftwing in botsing komt\nmet zijn vinnen of staart.")
          	  case 1:
/*< 40>*/ 		printf("Met het jaar wordt hij groter en groter.\nDe laatste tijd heeft men hem echter niet\ngezien.")
          	}
          }

