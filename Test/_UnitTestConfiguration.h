 //-----------------------------------------------------------------------------
// Copyright 2020, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#ifndef UNIT_TEST_CONFIGURATION_H
#define UNIT_TEST_CONFIGURATION_H

// Make sure all are enabled for final submission...
//      I grade what ever is set in this file - Keenan

#define Combo_VectLine_Test_Enable                          true
#define Combo_VectCrossAddSub_Test_Enable                   true
#define Combo_VectCrossAddSubMatrixMult_Test_Enable         true	
#define Combo_VectCrossAddSubMatrixMultCross_Test_Enable    true	
#define Combo_VectCrossCrossNorm_Test_Enable                true	
#define Combo_Junkfood_Test_Enable                          true

#define Matrix_Accessor_Set_Test_Enable                     true
#define Matrix_Accessor_Get_Const_Test_Enable               true
#define Matrix_Accessor_Get_Test_Enable                     true

#define Matrix_add_matrix_Test_Enable                       true
#define Matrix_addEqual_matrix_Test_Enable                  true
#define Matrix_sub_matrix_Test_Enable                       true
#define Matrix_subEqual_matrix_Test_Enable                  true

#define Matrix_Bracket_set_Test_Enable                      true
#define Get_Brackets_const_Test_Enable                      true
#define Matrix_Bracket_get_Test_Enable                      true

#define MatrixRotOrient_Test_Enable                         true
#define MatrixRotInverseOrient_Test_Enable                  true
#define MatrixRotAxisAngle_Test_Enable                      true
#define MatrixDestructor_constuctor_Test_Enable             true
#define Matrix_copy_constructor_Test_Enable                 true
#define Matrix_vector_constructor_Test_Enable               true
#define Matrix_default_constructor_Test_End                 true

#define Matrix_det_Test_Enable                              true
#define Matrix_Transpose_Test_Enable                        true
#define Matrix_GetTranspose_Test_Enable                     true
#define Matrix_AssignmentOperator_Test_Enable               true

#define Matrix_inverse_Test_Enable                          true
#define Matrix_getinverse_Test_Enable                       true

#define Matrix_mult_matrix_Test_Enable                      true
#define Matrix_multEqual_matrix_Test_Enable                 true

#define Matrix_Scale_Test_Enable                            true
#define Matrix_times_Scale_Test_Enable                      true
#define Matrix_ScaleEquals_Test_Enable                      true

#define Matrix_SET_Identity_Test_Enable                     true
#define Matrix_SET_Zero_Test_Enable                         true
#define Matrix_SET_Trans_Test_Enable                        true
#define Matrix_SET_Trans_Vect_Test_Enable                   true
#define Matrix_SET_SCALE_Test_Enable                        true
#define Matrix_SET_SCALE_Vect_Test_Enable                   true
#define Matrix_SET_RotX_SET_Test_Enable                     true
#define Matrix_SET_RotY_SET_Test_Enable                     true
#define Matrix_SET_RotZ_SET_Test_Enable                     true
#define Matrix_SET_set_ROW_0_Test_Enable                    true
#define Matrix_SET_set_ROW_1_Test_Enable                    true
#define Matrix_SET_set_ROW_2_Test_Enable                    true
#define Matrix_SET_set_ROW_3_Test_Enable                    true
#define Matrix_SET_get_ROW_0_Test_Enable                    true
#define Matrix_SET_get_ROW_1_Test_Enable                    true
#define Matrix_SET_get_ROW_2_Test_Enable                    true
#define Matrix_SET_get_ROW_3_Test_Enable                    true
#define Matrix_SET_RotXYZ_SET_Test_Enable                   true
#define Matrix_SET_MatrixRotAxisAngle_set_Test_Enable       true
#define Matrix_SET_MatrixRotOrient_set_Test_Enable          true
#define Matrix_SET_MatrixRotInverseOrient_set_Test_Enable   true
#define Matrix_SET_isEqual_false_Test_Enable                true
#define Matrix_SET_set_Vectors2_Test_Enable                 true

#define Special_Matrix_Identity_Test_Enable                 true
#define Special_Matrix_Zero_Test_Enable                     true
#define Special_Matrix_Trans_Test_Enable                    true
#define Special_Matrix_Trans_Vect_Test_Enable               true
#define Special_Matrix_SCALE_Test_Enable                    true
#define Special_Matrix_SCALE_Vect_Test_Enable               true
#define Special_RotX_Test_Enable                            true
#define Special_RotY_Test_Enable                            true
#define Special_RotZ_Test_Enable                            true
#define Special_isEqual_false2_Test_Enable                  true

#define Special_RotXYZ_Constructor_Test_Enable              true
#define Special_RotXYZ_Set_Test_Enable						true

#define Special_isEqual_true_Test_Enable                    true
#define Special_isIdentity_false_Enable_Test                true
#define Special_isIdentity_true_Enable_Test                 true

#define Matrix_UnaryPlus_Test_Enable                        true
#define Matrix_unary_equal_Plus_Test_Enable                 true
#define Matrix_UnaryMinus_Test_Enable                       true
#define Matrix_unary_equal_Minus_Test_Enable                true
															
#define Get_Accessors_Test_Enable                           true
#define Get_Accessors_const_Test_Enable                     true
#define Set_Accessors_Test_Enable                           true
#define Set_Accessors_get_Test_Enable                       true
															
#define Vect_Add_Vect_TesT_Enable                           true
#define Vect_plusEqual_Vect_Test_Enable                     true
#define Vect_Sub_Vect_Test_Enable                           true
#define Vect_SubEqual_Vect_Test_Enable                      true

#define IsEqualFalse_Test_Enable                            true
#define IsEqualTrue_Test_Enable                             true
#define IsZeroFalse_Test_Enable                             true
#define IsZeroTrue_True_Enable                              true
#define IsEqualFalse_default_Test_Enable                    true
#define IsEqualTrue_default_Test_Enable                     true
#define IsZeroFalse_default_Test_Enable                     true
#define IsZeroTrue_default_Test_Enable                      true

#define Get_Brackets_Test_Enable                            true
#define Get_Brackets_const_Test_End                         true
#define Set_Brackets_Test_Enable                            true
#define Set_Brackets_get_Test_Enable                        true

#define Vect_default_constuctor_Enable                      true
#define Vect_individual_defaultW_constuctor_Enable          true
#define Vect_individual_constuctor_Enable                   true
#define Vect_assignment_operator_Enable                     true
#define Vect_Copy_constuctor_Enable                         true
#define Vect_Destructor_constuctor_Enable                   true
															
#define Vect_Dot_Enable                                     true
#define Vect_Cross_Enable                                   true
#define Vect_Normalize_Enable                               true
#define Vect_GetNormalize_Enable                            true
#define Vect_Mag_Enable                                     true
#define Vect_MagSquared_Enable                              true
#define Vect_getAngle_Enable                                true
															
#define Vect_mult_matrix_Enable                             true
#define Vect_multEqual_matrix_Enable                        true
															
#define Vect_scale_Vect_Enable                              true
#define Vect_times_Scale_Enable                             true
#define Vect_ScaleEquals_Enable                             true
															
#define Vect_set_3_elements_Enable                          true
#define Vect_set_4_elements_Enable                          true
#define Vect_set_Vector_Enable                              true
															
#define Vect_SampleTest_Enable                              true
#define Vect_ConstantCheck_Enable                           true
															
#define Vect_unary_Plus_Enable                              true
#define Vect_unary_equal_Plus_Enable                        true
#define Vect_unary_Minus_Enable                             true
#define Vect_unary_equal_Minus_Enable                       true

#define Trig_Cos_Enable										true
#define Trig_Sin_Enable										true
#define Trig_Tan_Enable										true
#define Trig_ATan_Enable									true
#define Trig_ATan2_Enable									true
#define Trig_ACos_Enable									true
#define Trig_ASin_Enable									true
#define Trig_CosSin_Enable									true
#define Trig_Sqrt_Enable									true
#define Trig_RSqrt_Enable									true

#endif

// ---  End of File ---------------
