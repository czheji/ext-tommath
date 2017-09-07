
#add_definitions(-DMP_32BIT)
set(SRC
        src/bncore.c
        src/bn_error.c
        src/bn_fast_mp_invmod.c
        src/bn_s_mp_add.c
        src/bn_s_mp_exptmod.c
        src/bn_s_mp_mul_digs.c
        src/bn_s_mp_mul_high_digs.c
        src/bn_s_mp_sqr.c
        src/bn_s_mp_sub.c
        src/bn_fast_mp_montgomery_reduce.c
        src/bn_fast_s_mp_mul_digs.c
        src/bn_fast_s_mp_mul_high_digs.c
        src/bn_fast_s_mp_sqr.c
        src/bn_mp_2expt.c
        src/bn_mp_abs.c
        src/bn_mp_add.c
        src/bn_mp_add_d.c
        src/bn_mp_addmod.c
        src/bn_mp_and.c
        src/bn_mp_clamp.c
        src/bn_mp_clear.c
        src/bn_mp_clear_multi.c
        src/bn_mp_cmp.c
        src/bn_mp_cmp_d.c
        src/bn_mp_cmp_mag.c
        src/bn_mp_cnt_lsb.c
        src/bn_mp_copy.c
        src/bn_mp_count_bits.c
        src/bn_mp_div.c
        src/bn_mp_div_2.c
        src/bn_mp_div_2d.c
        src/bn_mp_div_3.c
        src/bn_mp_div_d.c
        src/bn_mp_exch.c
        src/bn_mp_grow.c
        src/bn_mp_init.c
        src/bn_mp_init_copy.c
        src/bn_mp_init_multi.c
        src/bn_mp_init_set.c
        src/bn_mp_init_set_int.c
        src/bn_mp_init_size.c
        src/bn_mp_invmod.c
        src/bn_mp_invmod_slow.c
        src/bn_mp_is_square.c
        src/bn_mp_jacobi.c
        src/bn_mp_karatsuba_mul.c
        src/bn_mp_karatsuba_sqr.c
        src/bn_mp_lcm.c
        src/bn_mp_lshd.c
        src/bn_mp_mod.c
        src/bn_mp_mod_2d.c
        src/bn_mp_mod_d.c
        src/bn_mp_mul.c
        src/bn_mp_mul_2.c
        src/bn_mp_mul_2d.c
        src/bn_mp_mul_d.c
        src/bn_mp_mulmod.c
        src/bn_mp_n_root.c
        src/bn_mp_neg.c
        src/bn_mp_or.c
        src/bn_mp_radix_size.c
        src/bn_mp_radix_smap.c
        src/bn_mp_rand.c
        src/bn_mp_read_radix.c
        src/bn_mp_read_signed_bin.c
        src/bn_mp_read_unsigned_bin.c
        src/bn_mp_reduce.c
        src/bn_mp_reduce_setup.c
        src/bn_mp_rshd.c
        src/bn_mp_set.c
        src/bn_mp_set_int.c
        src/bn_mp_shrink.c
        src/bn_mp_signed_bin_size.c
        src/bn_mp_sqr.c
        src/bn_mp_sqrmod.c
        src/bn_mp_sqrt.c
        src/bn_mp_sub.c
        src/bn_mp_sub_d.c
        src/bn_mp_submod.c
        src/bn_mp_to_signed_bin.c
        src/bn_mp_to_signed_bin_n.c
        src/bn_mp_to_unsigned_bin.c
        src/bn_mp_to_unsigned_bin_n.c
        src/bn_mp_toom_mul.c
        src/bn_mp_toom_sqr.c
        src/bn_mp_toradix.c
        src/bn_mp_toradix_n.c
        src/bn_mp_unsigned_bin_size.c
        src/bn_mp_xor.c
        src/bn_mp_zero.c
        src/bn_reverse.c
        )

add_library(tommath STATIC ${SRC})
target_compile_definitions(tommath PUBLIC MP_32BIT)
target_include_directories(tommath PUBLIC inc)

install(TARGETS tommath EXPORT tommath
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        )
file(GLOB INC_FILES inc/*.h)
install(FILES ${INC_FILES} DESTINATION inc)
export(EXPORT tommath
        FILE "${CMAKE_CURRENT_BINARY_DIR}/cmake/ext/tommath.cmake"
        )