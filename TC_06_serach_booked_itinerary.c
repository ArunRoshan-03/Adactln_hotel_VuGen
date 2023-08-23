TC_06_serach_booked_itinerary()
{

	lr_think_time(12);

	web_custom_request("BookedItinerary.php_2",
		"URL=https://adactinhotelapp.com/BookedItinerary.php",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://adactinhotelapp.com/BookedItinerary.php",
		"Snapshot=t60.inf",
		"Mode=HTML",
		"Body=order_id_text=6084IT0X07&search_hotel_id=Go&order_id_891059=DEX4OBVQ2Q&hotel_name_891059={p_hotel_name}&location_891059={p_location}&rooms_891059={p_room}+Rooms&first_name_891059={p_firstname}&last_name_891059={p_lastname}&arr_date_891059={P_pick_in}&dep_date_891059={P_pick_out}&no_days_891059=1+Days&room_type_891059={p_room_types}&price_night_891059=AUD+%24+225&total_price_891059=AUD+%24+259",
		LAST);

	return 0;
}