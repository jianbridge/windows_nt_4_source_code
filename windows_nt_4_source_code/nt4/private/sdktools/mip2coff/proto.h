void warning(char *, ...);
extern void fatal(char *, ...);
extern void verbose_pop_indent();
extern void verbose_push_indent(int);
extern void verbose_mc_symbol(pSYMR, SYM_ENUM_e);
extern void verbose_add_indent(int);
extern void verbose_printf(char *, ...);
extern void process_args(argid_e *, struct arg_s *, callinfo_s *);
extern long buffer_total(struct buffer_s *);
extern void buffer_put_value(struct buffer_s *, unsigned long, long, long);
extern char * buffer_ptr(struct buffer_s *);
extern unsigned long buffer_write(struct buffer_s *,FILE *);
extern struct buffer_s * buffer_create(long);
extern void buffer_put(struct buffer_s *, char *, int);
extern char * mc_st_to_ascii(long);
extern char * mc_sc_to_ascii(long);
extern char * cv_sym_to_ascii(SYM_ENUM_e);
extern void init_symbol_relocation(FILE *);
extern void conv_open(struct conv_s *, char *);
extern void conv_close(struct conv_s *);
extern void convert_symbols_and_types(char *, FILE *);
extern unsigned long generate_relocation(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
extern data get_offset_from_framereg(arg_s *, callinfo_s *, long *);
extern data get_absolute_address(arg_s *, callinfo_s *, long *);
extern data get_symbol_value(arg_s *, callinfo_s *, long *);
extern data get_symbol_name(arg_s *, callinfo_s *, long *);
extern void get_numeric_symbol_value(arg_s *, callinfo_s *, long *);
extern data get_compiler_version(arg_s *, callinfo_s *, long *);
extern data get_block_length(arg_s *, callinfo_s *, long *);
extern data get_cv_symbol_type(arg_s *, callinfo_s *, long *);
extern data get_arg_type(arg_s *, callinfo_s *, long *);
extern data get_length_dummy(arg_s *, callinfo_s *, long *);
extern data force_ignore_matching_end(arg_s *, callinfo_s *, long *);
extern void put_numeric(char *, struct buffer_s *, unsigned long);
extern data get_arg_count(arg_s *, callinfo_s *, long *);
extern data get_proto_list(arg_s *, callinfo_s *, long *);
extern data get_procedure_length(arg_s *, callinfo_s *, long *);
extern data get_procedure_debug_start(arg_s *, callinfo_s *, long *);
extern data get_procedure_args(arg_s *, callinfo_s *, long *);
extern data get_procedure_debug_end(arg_s *, callinfo_s *, long *);
extern struct type_s * type_create();
extern unsigned long type_get_index(struct type_s *);
extern unsigned long type_write(FILE *);
extern data get_modifier_attr(arg_s *, callinfo_s *, long *);
extern data get_ptr_attr(arg_s *, callinfo_s *, long *);
extern data get_leaf_tag(arg_s *, callinfo_s *, long *);
extern data get_type(arg_s *, callinfo_s *, long *);
extern data get_next_type(arg_s *, callinfo_s *, long *);
extern data get_aux_type(arg_s *, callinfo_s *, long *);
extern data nested_aux_type(callinfo_s *, long *, long, long);
extern data get_type_size(arg_s *, callinfo_s *, long *);
extern data get_proc_type(arg_s *, callinfo_s *, long *);
extern data type_save_pointer(arg_s *, callinfo_s *, long *);
extern data type_fill_pointer(arg_s *, callinfo_s *, long *);
extern void symbols_map(struct conv_s *);
extern data restore_symbol_buf(arg_s *, callinfo_s *, long *);
extern data list_start(arg_s *, callinfo_s *, long *);
extern void list_end(arg_s *, callinfo_s *, long *);
extern data list_member(arg_s *, callinfo_s *, long *);
extern long active_list_type();
extern long list_active();
extern data get_field_count(arg_s *, callinfo_s *, long *);
extern data get_field_list(arg_s *, callinfo_s *, long *);
extern data get_field_pad(arg_s *, callinfo_s *, long *);
extern data set_proc_arg_count_ptr(struct buffer_s *buf);
extern data get_symbol();
extern data get_procedure_framereg(arg_s *, callinfo_s *, long *);
extern data get_procedure_returnreg(arg_s *, callinfo_s *, long *);
extern data get_procedure_saved_regs_mask(arg_s *, callinfo_s *, long *);
extern data get_procedure_saved_fpregs_mask(arg_s *, callinfo_s *, long *);
extern data get_procedure_saved_regs_offset(arg_s *, callinfo_s *, long *);
extern data get_procedure_saved_fpregs_offset(arg_s *, callinfo_s *, long *);
extern data get_procedure_frame_size(arg_s *, callinfo_s *, long *);
extern void DebugBreak();