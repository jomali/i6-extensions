

!!==============================================================================
!!
!!	MENSAJES DE LA LIBRER�A EN ESPA�OL
!!	Narrador en segunda persona, tiempo pasado
!!
!!==============================================================================
!!
!!	Archivo:		sp2pasado.inf
!!	Autor(es):		J. Francisco Mart�n <jfm.lisaso@gmail.com>
!!	Idioma:			ES (Espa�ol)
!!	Sistema:		Inform-INFSP 6
!!	Plataforma:		M�quina-Z/Glulx
!!	Versi�n:		0.0
!!	Fecha:			2018/06/08
!!
!!------------------------------------------------------------------------------
!!
!!	HISTORIAL DE VERSIONES
!!
!!	0.0: 2018/06/08	Versi�n en desarrollo.
!!
!!------------------------------------------------------------------------------
!!
!!	Copyright (c) 2018, J. Francisco Mart�n
!!
!!	Este programa es software libre: usted puede redistribuirlo y/o
!!	modificarlo bajo los t�rminos de la Licencia P�blica General GNU
!!	publicada por la Fundaci�n para el Software Libre, ya sea la versi�n
!!	3 de la Licencia, o (a su elecci�n) cualquier versi�n posterior.
!!
!!	Este programa se distribuye con la esperanza de que sea �til, pero
!!	SIN GARANT�A ALGUNA; ni siquiera la garant�a impl�cita MERCANTIL o
!!	de APTITUD PARA UN PROP�SITO DETERMINADO. Consulte los detalles de
!!	la Licencia P�blica General GNU para m�s informaci�n.
!!
!!	Deber�a haber recibido una copia de la Licencia P�blica General GNU
!!	junto a este programa. En caso contrario, consulte
!!	<http://www.gnu.org/licenses/>.
!!
!!------------------------------------------------------------------------------

[ SecondPersonPast_ES n x1;

	Answer, Ask, AskFor:
		"No hab�a respuesta.";

	Attack:
		if (x1 == player) {
			print "No ";
			if (IsPluralNoun(player)) print "os hubieseis autolesionado";
			else print "te hubieses autolesionado";
			" a prop�sito.";
		}
		print "No hubiese servido de nada tratar de ";
		LanguageVerb(verb_word);
		" ", (the) x1, ".";

	Blow:
		if (IsPluralNoun(player)) print "Vuestro";
		else print "Tu";
		" soplido no produjo ning�n efecto.";

	Burn:
		print "Aquella era una idea peligrosa con la que no ";
		if (IsPluralNoun(player)) print "hubieseis logrado";
		else print "hubieses logrado";
		" nada en cualquier caso.";

	Buy:
		if (x1 == 0) "No hab�a nada en venta.";
		else {
			print "No ";
			if (IsPluralNoun(player)) print "pod�ais";
			else print "pod�as";
			" comprar ", (the) x1, ".";
		}

	Climb:
		print "No era algo a lo que ";
		if (IsPluralNoun(player)) print "pudieseis";
		else print "pudieses";
		print " ";
		LanguageVerb(verb_word);
		".";

	Close:
		switch (n) {
			1:
				"No era algo que se pudiese cerrar.";
			2:
				"Ya estaba", (n) x1, " cerrad", (o) x1, ".";
			3:
				if (IsPluralNoun(player)) print "Cerrasteis";
				else print "Cerraste";
				" ", (the) x1, ".";
		}

	Consult:
		print "No ";
		if (IsPluralNoun(player)) print "descubristeis";
		else print "descubriste";
		" nada interesante en ", (the) x1, " sobre aquel tema.";

	Cut:
		print "Cort�ndo", (lo) x1, " no ";
		if (IsPluralNoun(player)) print "hubieseis logrado";
		else print "hubieses logrado";
		" gran cosa.";

	Dig:
		print "No hubiese servido de nada que ";
		if (IsPluralNoun(player)) print "os pusieseis";
		else print "te pusieses";
		print " a ";
		LanguageVerb(verb_word);
		" all�.";

	Disrobe:
		switch (n) {
			1:
				print "No ", (lo) x1, " ";
				if (IsPluralNoun(player)) print "llevabais";
				else print "llevabas";
				" puest", (o) x1, ".";
			2:
				if (IsPluralNoun(player)) print "Os quitasteis";
				else print "Te quitaste";
				" ", (the) x1, ".";
		}

	Drink:
		"Aquello no parec�a potable.";

	Drop:
		switch (n) {
			1:
				print "Para poder dejar ", (the) x1, " ";
				if (IsPluralNoun(player)) print "hubieseis debido";
				else print "hubieses debido";
				" tener", (lo) x1, ".";
			2:
				print "No ", (lo) x1, " ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
				" ", (contigo) player, ".";
			3:
				print "(Primero ";
				if (IsPluralNoun(player)) print "os quitasteis";
				else print "te quitaste";
				" ", (the) x1, ".)";
			4:
				"Dejad", (o) x1, ".";
		}

	Eat:
		switch (n) {
			1:
				"Aquello no parec�a comestible.";
			2:
				if (IsPluralNoun(player)) print "Os comisteis";
				else print "Te comiste";
				" ", (the) x1, ".";
		}

	EmptyT:
		switch (n) {
			1:
 				"", (The) x1, " no pod�a", (n) x1, " tener cosas dentro.";
			2:
				print "No ";
 				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" hacerlo porque ", (the) x1, " estaba", (n) x1,
				" cerrad", (o) x1, ".";
			3:
				"", (The) x1, " ya estaba", (n) x1, " vac�", (o) x1, ".";
			4:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" vaciar un objeto sobre s� mismo.";
		}

	Enter:
		switch (n) {
			1:
				print "Ya ";
				if (IsPluralNoun(player)) print "estabais";
				else print "estabas";
				print " ";
				if (x1 has supporter) print "sobre";
				else print "en";
				" ", (the) x1, ".";
			2:
				print "No ";
				if (IsPluralNoun(x1)) print "eran";
				else print "era";
				print " algo donde ";
				if (IsPluralNoun(player)) print "pudieseis";
				else print "pudieses";
				print " ";
				LanguageVerb(verb_word);
				".";
			3:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				print " ";
				LanguageVerb(verb_word);
				print " en ", (the) x1, " porque estaba", (n) x1,
				" cerrad", (o) x1, ".";
			4:
				print "No ";
				if (IsPluralNoun(player)) print "ibais a poder";
				else print "ibas a poder";
				print " ";
				LanguageVerb(verb_word);
				print " ah� mientras no ", (lo) x1, " ";
				if (IsPluralNoun(player)) print "soltaseis";
				else print "soltases";
				" primero.";
			5:
				if (x1 has supporter) {
					if (IsPluralNoun(player)) print "Subisteis";
					else print "Subiste";
					print " ", (al) x1;
				} else {
					if (IsPluralNoun(player)) print "Entrasteis";
					else print "Entraste";
					print " en ", (the) x1;
				}
				".";
			6:
				if (x1 has supporter) {
					if (IsPluralNoun(player)) print "(Os bajasteis";
					else print "(Te bajaste";
				} else {
					if (IsPluralNoun(player)) print "(Salisteis";
					else print "(Saliste";
				}
				" ", (del) x1, ").";
			7:
				if (x1 has supporter) {
					if (IsPluralNoun(player)) print "(Os subisteis";
					else print "(Te subiste";
					" ", (al) x1, ").^";
				} else if (x1 has container) {
					if (IsPluralNoun(player)) print "(Os metisteis";
					else print "(Te metiste";
					" en ", (the) x1, ").^";
				} else {
					if (IsPluralNoun(player)) print "(Entrasteis";
					else print "(Entraste";
					" en ", (the) x1, ").^";
				}
		}

	Examine:
		switch (n) {
			1:
				print "Estaba demasiado oscuro. No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" ver nada.";
			2:
				print "No ";
				if (IsPluralNoun(player)) print "observasteis";
				else print "observaste";
				"  nada especial en ", (the) x1, ".";
			3:
				print (The) x1, " estaba", (n) x1;
				if (x1 has on) print " encendid", (o) x1;
				else print " apagad", (o) x1;
				".";
		}

	Exit:
		switch (n) {
			1:
				print "No ";
				if (IsPluralNoun(player)) print "estabais";
				else print "estabas";
 				print " en ning�n sitio del que ";
				if (IsPluralNoun(player)) print "debieseis";
				else print "debieses";
				print " ";
				LanguageVerb(verb_word);
				".";
			2:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" salir ", (del) x1, " porque estaba", (n) x1,
				" cerrad", (o) x1, ".";
			3:
				if (x1 has supporter) {
					if (IsPluralNoun(player)) print "Bajasteis";
					else print "Bajaste";
				} else {
					if (IsPluralNoun(player)) print "Salisteis";
					else print "Saliste";
				}
				" ", (del) x1, ".";
			4:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				print ". No ";
				if (IsPluralNoun(player)) print "estabais";
				else print "estabas";
				print " ";
				if (x1 has supporter) print "encima";
				else print "dentro";
				" ", (del) x1, ".";
		}

	Fill:
		print "No ";
		if (IsPluralNoun(player)) print "pod�ais";
		else print "pod�as";
		" llenar", (lo) x1, ".";

	GetOff:
		print "No ";
		if (IsPluralNoun(player)) print "pod�ais";
		else print "pod�as";
		print ". No ";
		if (IsPluralNoun(player)) print "estabais";
		else print "estabas";
		" en ", (the) x1, ".";

	Give:
		switch (n) {
			1:
				print "No ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
				" ", (the) x1, ".";
			2:
				if (IsPluralNoun(player)) print "Manoseasteis";
				else print "Manoseaste";
				" ", (the) x1, " durante unos momentos, sin conseguir nada.";
			3:
				"", (The) x1, " no parec�a", (n) x1, " interesad", (o) x1, ".";
		}

	Go:
		switch (n) {
			1:
				PronounNotice(x1);
				if (IsPluralNoun(player)) print "Ten�ais";
				else print "Ten�as";
				print " que ";
				if (x1 has supporter) {
					if (IsPluralNoun(player)) print "bajaros";
					else print "bajarte";
				}
				else print "salir";
				" ", (del) x1, " antes.";
			2:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" ir por ah�.";
			3:
				PronounNotice(x1);
				if (IsPluralNoun(player)) print "Erais incapaces";
				else print "Eras incapaz";
				" de trepar por ", (the) x1, ".";
			4:
				PronounNotice(x1);
				if (IsPluralNoun(player)) print "Erais incapaces";
				else print "Eras incapaz";
				" de bajar por ", (the) x1, ".";
			5:
				PronounNotice(x1);
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" pasar a trav�s ", (del) x1, ".";
			6:
				PronounNotice(x1);
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" ir porque ", (the) x1, " no llevaba", (n) x1,
				" a ning�n sitio.";
		}

	Insert:
		switch (n) {
			1:
				if (x1 has animate) {
					if (IsPluralNoun(player))
						"Antes ten�ais que ", (coge)"r", (lo) x1,
						" y no sab�ais si se hubiese", (n) x1, " dejado.";
					else
						"Antes ten�as que ", (coge)"r", (lo) x1,
						" y no sab�as si se hubiese", (n) x1, " dejado.";
				} else {
					if (IsPluralNoun(player)) print "Necesitabais";
					else print "Necesitabas";
					" tener ", (the) x1, " para poder meter", (lo) x1,
					" donde fuese.";
				}
			2:
				"No se pod�an meter cosas dentro ", (del) x1, ".";
			3:
				"", (The) x1, " estaba", (n) x1, " cerrad", (o) x1, ".";
			4:
				if (IsPluralNoun(player)) print "Ten�ais que quit�ros";
				else print "Ten�as que quit�rte";
				"", (lo) x1, " antes.";
			5:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" poner un objeto dentro de s� mismo.";
			6:
				print "(Primero ";
				if (IsPluralNoun(player)) print "os ", (lo) x1, " quitasteis";
				else print "te ", (lo) x1, "quitaste";
				").^";
			7:
				"No quedaba sitio en ", (the) x1, ".";
			8:
				"Hecho.";
			9:
				if (IsPluralNoun(player)) print "Metisteis";
				else print "Metiste";
				" ", (the) x1, " dentro ", (del) second, ".";
		}

	Inv:
		switch (n) {
			1:
				print "No ";
				if (IsPluralNoun(player)) print "llevabais";
				else print "llevabas";
				" nada.";
			2:
				if (IsPluralNoun(player)) print "Llevabais";
				else print "Llevabas";
			3:
				print ":^";
			4:
				print ".^";
		}

	Jump:
		if (IsPluralNoun(player)) print "Saltasteis";
		else print "Saltaste";
		" en el sitio, sin ning�n resultado.";

	JumpOver, Tie:
		print "No ";
		if (IsPluralNoun(player)) print "hubieseis conseguido";
		else print "hubieses conseguido";
		" nada as�.";

	Kiss:
		print "No ";
		if (IsPluralNoun(player)) print "se os hubiese ocurrido";
		else print "se te hubiese ocurrido";
		" hacer algo as� en aquel momento.";

	Listen:
		print "No ";
		if (IsPluralNoun(player)) print "escuchasteis";
		else print "escuchaste";
		" nada fuera de lo com�n.";

	ListMiscellany:
		switch (n) {
			2:
				print " (que estaba", (n) x1, " cerrad", (o) x1, ")";
			4:
				print " (que estaba", (n) x1, " vac�", (o) x1, ")";
			6:
				print " (que estaba", (n) x1, " cerrad", (o) x1,
				" y vac�", (o) x1, ")";
			8:
				print " (alumbrando y que ";
				if (IsPluralNoun(player)) print "llevabais";
				else print "llevabas";
				print " puest", (o) x1;
			10:
				print " (que ";
				if (IsPluralNoun(player)) print "llevabais";
				else print "llevabas";
				print " puest", (o) x1;
			11:
				print " (que estaba", (n) x1, " ";
			17:
				print " (que estaba", (n) x1, " vac�", (o) x1, ")";
			18:
				print " que conten�a", (n) x1, " ";
			default:
				ThirdPersonPast_ES(n, x1);
		}

	Lock:
		switch (n) {
			1:
				"No parec�a", (n) x1, " tener ning�n tipo de cerrojo.";
			2:
				if (x1 provides with_key) {
					"", (The) x1, " ya estaba", (n) x1, " cerrad", (o) x1,
					" con llave.";
				}
				else {
					"", (The) x1, " ya ten�a", (n) x1, " echado el cerrojo.";
				}
			3:
				print "Primero ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
 				" que cerrar ", (the) x1, ".";
			4:
				if (second) {
					"No parec�a", (n) x1, " encajar en la cerradura.";
				} else {
					if (IsPluralNoun(player)) print "Necesitabais";
					else print "Necesitabas";
					" alg�n tipo de llave.";
				}
			5:
				if (second) {
					if (IsPluralNoun(player)) print "Cerrasteis";
					else print "Cerraste";
					" ", (the) x1, " con ", (the) second, ".";
				} else {
					if (IsPluralNoun(player)) print "Echasteis";
					else print "Echaste";
					" el cerrojo ", (al) x1, ".";
				}
		}

	Look:
		switch (n) {
			5, 6:
				if (real_location provides inhibit_object_list)
					if (real_location.inhibit_object_list)
						return true;
				new_line;
				if (x1 ~= location) {
					if (x1 has supporter) print "Sobre ";
					else print "En ";
					print (the) x1, " ";
					if (IsPluralNoun(player)) print "pod�ais";
					else print "pod�as";
					print " ver ";
				} else {
					if (IsPluralNoun(player)) print "Pod�ais";
					else print "Pod�as";
					print " ver ";
				}
				if (n==5) print "tambi�n ";
				WriteListFrom(child(x1),
					ENGLISH_BIT + WORKFLAG_BIT + RECURSE_BIT
					+ PARTINV_BIT + TERSE_BIT + CONCEAL_BIT);
				".";
			7:
				print "No ";
				if (IsPluralNoun(player)) print "observasteis";
				else print "observaste";
				" nada digno de menci�n al mirar hacia ", (the) x1, ".";
			default:
				ThirdPersonPast_ES(n, x1);
		}

	LookUnder:
		switch (n) {
			1:
				"Estaba demasiado oscuro como para poder ver algo.";
			2:
				print "No ";
				if (IsPluralNoun(player)) print "visteis";
				else print "viste";
				" nada destacable.";
		}

	Miscellany:
		switch (n) {
			3:
				if (IsPluralNoun(player)) print " Hab�ais muerto ";
				else print " Hab�as muerto ";
			4:
				if (IsPluralNoun(player)) print " Hab�ais ganado ";
				else print " Hab�as ganado ";
			9:
				print "^�";
				if (IsPluralNoun(player)) print "Os hab�ais";
				else print "Te hab�as";
				" quedado a oscuras!";
			17:
				"Estaba demasiado oscuro como para poder ver algo.";
			18:
				if (IsPluralNoun(player)) print "vosotr", (o) player;
				else print "t�";
				print " mism", (o) player;
			19:
				"Tan buen aspecto como siempre.";
			26:
				print "(Primero ";
				if (IsPluralNoun(player)) print "tratasteis";
				else print "trataste";
				" de ", (coge) "r ", (the) x1, ".)";
			32:
				print "No ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
				" eso.";
			44:
				if (action_to_be == ##Drop) {
					print "[No ";
					if (IsPluralNoun(player)) print "ten�ais";
					else print "ten�as";
					print " nada que ";
					LanguageVerb(verb_word);
					"].";
				} else {
					print "[No hab�a nada que ";
					LanguageVerb(verb_word);
					"].";
				}
			default:
				ThirdPersonPast_ES(n, x1);
		}

	Objects:
		switch (n) {
			1:
				print "Objectos que ";
				if (IsPluralNoun(player)) print "hab�ais";
				else print "hab�as";
				" manejado:^";
			2:
				"Ninguno.";
			3:
				print "   (puest", (o) x1, ")";
			4:
				print "   (", (contigo) player, ")";
			5:
				print "   (dejad", (o) x1, " con alguien)";
			6:
				print "   (entonces en ", (name) x1, ")";
			7:
				print "   (entonces en ", (the) x1, ")";
			8:
				print "   (entonces dentro ", (del) x1, ")";
			9:
				print "   (entonces en ", (the) x1, ")";
			10:
				print "   (perdid", (o) x1, ")";
		}

	Open:
		switch (n) {
			1:
				"No era algo que se pudiese abrir.";
			2:
				"Estaba", (n) x1, " cerrad", (o) x1, " con llave.";
			3:
				"Ya estaba", (n) x1, " abiert", (o) x1, ".";
			4:
				if (IsPluralNoun(player)) print "Abristeis";
				else print "Abriste";
				print " ", (the) x1, ", descubriendo ";
				if (WriteListFrom(child(x1),
					ENGLISH_BIT + TERSE_BIT + CONCEAL_BIT) == 0) {
					print "que estaba", (n) x1, " vac�", (o) x1;
				}
				".";
			5:
				if (IsPluralNoun(player)) print "Abristeis";
				else print "Abriste";
				" ", (the) x1, ".";
		}

	Order:
		"", (The) x1, " ten�a", (n) x1, " mejores cosas que hacer.";

	Pray:
		"La fe tal vez pudiese resultar �til en una ocasi�n diferente.";

	Pull, Push, Turn:
		switch (n) {
			1:
				"Estaba", (n) x1, " firmemente sujet", (o) x1, ".";
			2:
				print "No ";
				if (IsPluralNoun(player)) print "fuisteis capaces";
				else print "fuiste capaz";
				".";
			3:
				"No ocurri� nada, aparentemente.";
			4:
				"Aquello hubiese sido, como poco, maleducado.";
		}

	PushDir:
		switch (n) {
			1:
				print "En realidad no ";
				if (IsPluralNoun(player)) print "cre�ais";
				else print "cre�as";
				" que empujar", (lo) x1, " hubiese servido de nada.";
			2:
				"Aquello no era una direcci�n.";
			3:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" empujar", (lo) x1, " en esa direcci�n.";
		}

	PutOn:
		switch (n) {
			1:
				if (x1 has animate) {
					if (IsPluralNoun(player))
						"Antes ten�ais que ", (coge)"r", (lo) x1,
						" y no sab�ais si se hubiese", (n) x1,
						" dejado.";
					else
						"Antes ten�as que ", (coge)"r", (lo) x1,
						" y no sab�as si se hubiese", (n) x1, " dejado.";
				} else {
					if (IsPluralNoun(player)) print "Necesitabais";
					else print "Necesitabas";
					" tener ", (the) x1, " para poder poner", (lo) x1,
					" donde fuese.";
				}
			2:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" poner un objeto sobre s� mismo.";
			3:
				"Poner cosas sobre ", (the) x1, " no hubiese servido de nada.";
			4:
				if (IsPluralNoun(player)) print "Os faltaba";
				else print "Te faltaba";
				" destreza.";
			5:
				print "(Primero ";
				if (IsPluralNoun(player)) print "os ", (lo) x1, " quitasteis";
				else print "te ", (lo) x1, " quitaste";
				").^";
			6:
				"No quedaba sitio en ", (the) x1, " para poner nada m�s.";
			7:
				"Hecho.";
			8:
				if (IsPluralNoun(player)) print "Colocasteis";
				else print "Colocaste";
				" ", (the) x1, " sobre ", (the) second, ".";
		}

	Remove:
		switch (n) {
			1:
				"Por desgracia ", (the) parent(x1), " estaba", (n) parent(x1),
				" cerrad", (o) parent(x1), ".";
			2:
				if (second has animate)
					"�Pero si no ", (lo) x1, " ten�a", (n) second, "!";
				else
					"�Pero si no estaba", (n) x1, " ah� en aquel momento!";
			3:
				if (verb_word == 'quita') "Quitad", (o) x1, ".";
				"Sacad", (o) x1, ".";
		}

	Rub:
		"Ya estaba", (n) x1, " bastante limpi", (o) x1, ".";

	Search:
		switch (n) {
			1:
				"Estaba demasiado oscuro como para poder ver algo.";
			2:
				"No hab�a nada sobre ", (the) x1, ".";
			3:
				print "Sobre ", (the) x1;
				WriteListFrom(child(x1),
					ENGLISH_BIT + TERSE_BIT + CONCEAL_BIT + ISARE_BIT);
				".";
			4:
				print "No ";
				if (IsPluralNoun(player)) print "encontrasteis";
				else print "encontraste";
				" nada interesante.";
			5:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais";
				else print "pod�as";
				" ver lo que hab�a dentro ", (del) x1, " porque
				estaba", (n) x1, " cerrad", (o) x1, ".";
			6:
				"", (The) x1, " estaba", (n) x1, " vac�", (o) x1, ".";
			7:
				print "En ", (the) x1;
				WriteListFrom(child(x1),
					TERSE_BIT + ENGLISH_BIT + ISARE_BIT + CONCEAL_BIT);
				".";
		}

	Set:
		print "No, no ";
		if (IsPluralNoun(player)) print "pod�ais";
		else print "pod�as";
 		".";

	SetTo:
		"Aquello no pod�a regularse a ning�n valor.";

	Show:
		switch (n) {
			1:
				print "No ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
				" ", (the) x1, ".";
			2:
				"", (The) x1, " no mostraba", (n) x1, " ning�n inter�s.";
		}

	Sing:
		if (IsPluralNoun(player)) print "Cantabais";
		else print "Cantabas";
		" fatal.";

	Sleep:
		print "No ";
		if (IsPluralNoun(player)) print "estabais";
		else print "estabas";
		" especialmente somnolient", (o) player, ".";

	Smell:
		print "No ";
		if (IsPluralNoun(player)) print "olisteis";
		else print "oliste";
		" nada extra�o.";

	Squeeze:
		switch (n) {
			1:
				print "En realidad no ";
				if (IsPluralNoun(player)) print "se os hubiese ocurrido";
				else print "se te hubiese ocurrido";
				" hacer algo as�.";
			2:
				print "No ";
				if (IsPluralNoun(player)) print "conseguisteis";
				else print "conseguiste";
				" nada haciendo eso.";
		}

	Swim:
		"No era el momento ni el lugar para ponerse a nadar.";

	Swing:
		print "No parec�a", (n) x1, " el lugar m�s adecuado en el que ";
		if (IsPluralNoun(player)) print "columpiaros";
		else print "columpiarte";
		".";

	SwitchOff:
		switch (n) {
			1:
				"No era algo que se pudiese apagar.";
			2:
				"Ya estaba", (n) x1, "apagad", (o) x1, ".";
			3:
				if (IsPluralNoun(player)) print "Apagasteis";
				else print "Apagaste";
				" ", (the) x1, ".";
		}

	SwitchOn:
		switch (n) {
			1:
				"No era algo que se pudiese encender.";
			2:
				"Ya estaba", (n) x1, " encendid", (o) x1, ".";
			3:
				if (IsPluralNoun(player)) print "Encendisteis";
				else print "Encendiste";
				" ", (the) x1, ".";
		}

	Take:
		switch (n) {
			1:
				if (dialecto_sudamericano) print "Tomad";
				else print "Cogid";
				"", (o) noun, ".";
			2:
				print "Siempre ";
				if (IsPluralNoun(player)) print "os ten�ais";
				else print "te ten�as";
 				" a ", (string) YOURSELF__TX, ".";
			3:
				print "En realidad no ";
				if (IsPluralNoun(player)) print "cre�ais";
				else print "cre�as";
				" que ", (al) x1, " le", (s) x1, " hubiese gustado.";
			4:
				if (IsPluralNoun(player)) print "Ten�ais";
				else print "Ten�as";
				print " que ";
				if (x1 has supporter) {
					if (IsPluralNoun(player)) print "bajaros";
					else print "bajarte";
				}
				else print "salir";
				"", (del) x1, " antes.";
			5:
				print "Ya ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
				" ", (the) x1, ".";
			6:
				"Parec�a", (n) noun, " pertenecer ", (al) x1, ".";
			7:
				"Parec�a", (n) noun, " formar parte ", (del) x1, ".";
			8:
				"No estaba", (n) x1, " disponible", (s) x1, ".";
			9:
				"", (The) x1, " no estaba", (n) x1, " abiert", (o) x1, ".";
			10:
				print "Dif�cilmente ";
				if (IsPluralNoun(player)) print "hubieseis podido";
				else print "hubieses podido";
				" llevarse aquello.";
			11:
				"", (The) x1, "estaba", (n) x1, " fij", (o) x1,
				" en el sitio.";
			12:
				print "Ya ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
				" las manos ocupadas con demasiadas cosas.";
			13:
				print "(Primero ";
				if (IsPluralNoun(player)) print "colocasteis";
				else print "colocaste";
				" ", (the) x1, " en ", (the) SACK_OBJECT,
				" para hacer sitio).";
		}

	Taste:
		print "No ";
		if (IsPluralNoun(player)) print "saboreasteis";
		else print "saboreaste";
		" nada inesperado.";

	Tell:
		switch (n) {
			1:
				if (IsPluralNoun(player)) print "Hablasteis";
				else print "Hablaste";
				" sol", (o) player, " durante un rato.";
			2:
				print "No ";
				if (IsPluralNoun(player)) print "provocasteis";
				else print "provocaste";
				" ninguna reacci�n.";
		}

	Think:
		print "Si, eso ";
		if (IsPluralNoun(player)) print "intentabais";
		else print "intentabas";
		".";

	ThrowAt:
		switch (n) {
			1:
				"No hubiese servido de nada.";
			2:
				print "En el �ltimo momento ";
				if (IsPluralNoun(player)) print "os echasteis";
				else print "te echaste";
				" atr�s.";
		}

	Touch:
		switch (n) {
			1:
				print "En realidad no ";
				if (IsPluralNoun(player)) print "cre�ais";
				else print "cre�as";
				" que ", (al) x1, " le", (s) x1, " hubiese gustado.";
			2:
				print "No ";
				if (IsPluralNoun(player)) print "notasteis";
				else print "notaste";
				" nada extra�o al tacto.";
			3:
				print "En realidad no ";
				if (IsPluralNoun(player)) print "cre�ais";
				else print "cre�as";
				" que algo as� hubiese servido de nada.";
    	}

	Unlock:
		switch (n) {
			1:
				"No parec�a", (n) x1, " tener ning�n tipo de cerrojo.";
			2:
				"", (The) x1, " ya ten�a", (n) x1, " abierto el cerrojo.";
			3:
				if (second) {
					"No parec�a", (n) x1, " encajar en la cerradura.";
				} else {
					if (IsPluralNoun(player)) print "Necesitabais";
					else print "Necesitabas";
					" alg�n tipo de llave.";
				}
			4:
				if (IsPluralNoun(player)) print "Quitasteis";
				else print "Quitaste";
				print " el cerrojo ", (al) x1;
				if (second) print " con ", (the) second;
				".";
		}

	Wait:
		"Pasaba el tiempo...";

	Wake:
		"La cruda realidad es que aquello no era un sue�o.";

	WakeOther:
		"No parec�a necesario hacer aquello.";

	Wave:
		switch (n) {
			1:
				print "No l", (o) x1, " ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
				" ", (contigo) player, ".";
			2:
				if (IsPluralNoun(player)) print "Os sent�ais";
				else print "Te sent�as";
				" rid�cul", (o) player, " agitando ", (the) x1, ".";
		}

	WaveHands:
		if (IsPluralNoun(player)) print "Os encontrabais";
		else print "Te encontrabas";
		" rid�cul", (o) player, " gesticulando as�.";

	Wear:
		switch (n) {
			1:
				print "No ";
				if (IsPluralNoun(player)) print "pod�ais poneros";
				else print "pod�as ponerte";
				" aquello.";
			2:
				print "No ", (lo) x1, " ";
				if (IsPluralNoun(player)) print "ten�ais";
				else print "ten�as";
 				".";
			3:
				print "Ya ", (lo) x1;
				if (IsPluralNoun(player)) print "llevabais";
				else print "llevabas";
				" puest", (o) x1, ".";
			4:
				if (IsPluralNoun(player)) print "Os pusisteis";
				else print "Te pusiste";
				" ", (the) x1, ".";
		}

	default:
		ThirdPersonPast_ES(n, x1);

];