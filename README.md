# main

* ## hsh
    * clear_info
    * interactive
        * isatty
    * _eputchar
    * get_input
        * input_buf
            * signal
            * getline
            * _getline
            * remove_comments
            * build_history_list
        * check_chain
        * is_chain
        * _strlen
    * set_info
        * replace_alias
        * replace_vars
    * find_builtin
        * _strcmp
    * find_cmd
        * is_delim
        * find_path
        * _getenv
        * fork_cmd
        * is_cmd
        * print_error
    * free_info
* ## read_history
    * get_history_file
    * build_history_list
        * add_node_end
    * delete_node_at_index
    * renumber_history
* ## populate_inv_list
    * add_node_end
        * _memset

