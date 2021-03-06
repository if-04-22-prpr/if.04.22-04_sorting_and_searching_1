/*----------------------------------------------------------
 *				HTBLA-Leonding
 * ---------------------------------------------------------
 * Title:			Tests implementation of a Liked List.
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Unit tests for a linked list implemenation.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <string.h>

#include "shortcut.h"
#include "test_list.h"

int main(int argc, char *argv[])
{
	ADD_TEST(test_list_obtain__shall_allocate_a_list);
	ADD_TEST(test_list_obtain__shall_allocate_a_fresh_list);
	ADD_TEST(test_list_obtain__shall_allocate_a_different_list);
	ADD_TEST(test_list_obtain_failed__shall_not_allocate_a_list);
	
	ADD_TEST(test_list_get_size__shall_be_0_for_newly_obtained_list);
	ADD_TEST(test_list_get_size__shall_reflect_number_of_values_after_adding_values);
	ADD_TEST(test_list_get_size__shall_reflect_number_of_values_after_removing_values);
	ADD_TEST(test_list_get_size__shall_be_0_after_clear);
	ADD_TEST(test_list_get_size__shall_be_0_for_invalid_list);

	ADD_TEST(test_list_release__shall_release_a_valid_empty_list);
	ADD_TEST(test_list_release__shall_release_a_valid_filled_list);
	ADD_TEST(test_list_release__shall_ignore_release_of_an_invalid_list);
	
	ADD_TEST(test_list_is_valid__shall_be_true_for_valid_list);
	ADD_TEST(test_list_is_valid__shall_be_false_for_invalid_list);
	
	ADD_TEST(test_list_is_empty__shall_be_true__for_newly_obtained_list);
	ADD_TEST(test_list_is_empty__shall_be_false__after_adding_values);
	ADD_TEST(test_list_is_empty__shall_be_true_for_invalid_list);
	
	ADD_TEST(test_list_insert__shall_add_one_value_to_empty_list);
	ADD_TEST(test_list_insert__shall_add_multiple_values);
	ADD_TEST(test_list_insert__shall_add_many_values);
	ADD_TEST(test_list_insert__shall_ignore_invalid_list);
	
	ADD_TEST(test_list_remove__shall_not_remove_from_empty_list);
	ADD_TEST(test_list_remove__shall_remove_only_value);
	ADD_TEST(test_list_remove__shall_remove_one_value);
	ADD_TEST(test_list_remove__shall_remove_first_value);
	ADD_TEST(test_list_remove__shall_remove_value_in_the_middle);
	ADD_TEST(test_list_remove__shall_remove_value_at_the_end);
	ADD_TEST(test_list_remove__shall_not_remove_missing_value);
	
	ADD_TEST(test_list_remove_all__shall_not_remove_from_empty_list);
	ADD_TEST(test_list_remove_all__shall_remove_only_value);
	ADD_TEST(test_list_remove_all__shall_remove_all_values);
	ADD_TEST(test_list_remove_all__shall_remove_one_value);
	ADD_TEST(test_list_remove_all__shall_remove_all_values_in_a_row);
	ADD_TEST(test_list_remove_all__shall_remove_all_distributed_values);
	ADD_TEST(test_list_remove_all__shall_not_remove_missing_value);
	ADD_TEST(test_list_remove_all__shall_ignore_invalid_list);
	
	ADD_TEST(test_list_insert_at__shall_insert_single_value_in_empty_list);
	ADD_TEST(test_list_insert_at__shall_insert_value_at_the_beginning);
	ADD_TEST(test_list_insert_at__shall_insert_value_in_the_middle);
	ADD_TEST(test_list_insert_at__shall_insert_value_at_the_end);
	ADD_TEST(test_list_insert_at__shall_insert_value_after_the_end);
	ADD_TEST(test_list_insert_at__shall_ignore_invalid_list);
	
	ADD_TEST(test_list_remove_at__shall_not_remove_from_empty_list);
	ADD_TEST(test_list_remove_at__shall_remove_value_at_the_beginning);
	ADD_TEST(test_list_remove_at__shall_remove_value_in_the_middle);
	ADD_TEST(test_list_remove_at__shall_not_remove_from_empty_list);
	ADD_TEST(test_list_remove_at__shall_remove_value_at_the_end);
	ADD_TEST(test_list_remove_at__shall_not_remove_value_after_the_end);
	ADD_TEST(test_list_remove_at__shall_ignore_invalid_list);
	
	ADD_TEST(test_list_clear__shall_clear_empty_list);
	ADD_TEST(test_list_clear__shall_clear_list_with_one_value);
	ADD_TEST(test_list_clear__shall_clear_list_with_multiple_values);
	ADD_TEST(test_list_clear__shall_ingore_invalid_list);
	
	ADD_TEST(test_list_contains__shall_be_false_for_empty_list);
	ADD_TEST(test_list_contains__shall_be_true_for_one_value);
	ADD_TEST(test_list_contains__shall_be_true_for_multiple_values);
	ADD_TEST(test_list_contains__shall_be_false_form_missing_value);
	ADD_TEST(test_list_contains__shall_be_false_for_invalid_list);
	
	ADD_TEST(test_list_swap__shall_swap_same_value);
	ADD_TEST(test_list_swap__shall_swap_two_neighbor_value);
	ADD_TEST(test_list_swap__shall_swap_the_first_and_the_last_value);
	ADD_TEST(test_list_swap__shall_ignore_swap_of_index_out_of_bounds_1);
	ADD_TEST(test_list_swap__shall_ignore_swap_of_index_out_of_bounds_2);
	ADD_TEST(test_list_swap__shall_ignore_swap_of_index_out_of_bounds_3);
	ADD_TEST(test_list_swap__shall_ignore_invalid_lists);

	ADD_TEST(test_list_get_at__shall_return_0_for_empty_list);
	ADD_TEST(test_list_get_at__shall_return_single_value);
	ADD_TEST(test_list_get_at__shall_return_first_value);
	ADD_TEST(test_list_get_at__shall_return_values_in_added_order);
	ADD_TEST(test_list_get_at__shall_return_0_for_invalid_list);

	run_tests();
	return 0;
}
