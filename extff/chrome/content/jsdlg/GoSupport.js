﻿//acabaram de carregar
function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-support", "exit.alert", "support.message", "exit.botok", "exit.botcancel" ] );

	//fala as coisas
	CDlgManager_LoadedDialog("");


	//passa o texto
	var msg = new CTextItem();
	msg.SetText_string( document.getElementById("support.message").value );
	CSpeak.playItem(msg, null);
}

//deram um cancelar
function clickcancel()
{
	CSpeak.forceEnd();
	window.close();
	return true;
}

//deram um cancelar
function clickok()
{
	window.arguments[0].okButton = true;
	CSpeak.forceEnd();
	window.close();
	return true;
}

