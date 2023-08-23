TC_04_select_hotel()
{

	lr_think_time(12);

	web_submit_data("BookHotel.php",
		"Action=https://adactinhotelapp.com/BookHotel.php",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://adactinhotelapp.com/SelectHotel.php",
		"Snapshot=t53.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=radiobutton_0", "Value=0", ENDITEM,
		"Name=total_radiobutton", "Value=1", ENDITEM,
		"Name=hotel_name_0", "Value={p_hotel_name}", ENDITEM,
		"Name=location_0", "Value={p_location}", ENDITEM,
		"Name=rooms_0", "Value={p_room}", ENDITEM,
		"Name=arr_date_0", "Value={P_pick_in}", ENDITEM,
		"Name=dep_date_0", "Value={P_pick_out}", ENDITEM,
		"Name=no_days_0", "Value=1 Days", ENDITEM,
		"Name=room_type_0", "Value={p_room_types}", ENDITEM,
		"Name=price_night_0", "Value=AUD $ 225", ENDITEM,
		"Name=total_price_0", "Value=AUD $ 235", ENDITEM,
		"Name=continue", "Value=Continue", ENDITEM,
		"Name=hotel_name", "Value={p_hotel_name}", ENDITEM,
		"Name=location_name", "Value={p_location}", ENDITEM,
		"Name=room_types", "Value={p_room_types}", ENDITEM,
		"Name=rooms_no", "Value={p_room}", ENDITEM,
		"Name=arr_date", "Value={P_pick_out}", ENDITEM,
		"Name=dep_date", "Value={P_pick_in}", ENDITEM,
		"Name=no_days", "Value=1", ENDITEM,
		"Name=adults_room", "Value={p_adults_per_room}", ENDITEM,
		"Name=children_room", "Value=2", ENDITEM,
		"Name=price_night", "Value=AUD $ 225", ENDITEM,
		"Name=total_price", "Value=AUD $ 235", ENDITEM,
		LAST);

	return 0;
}
