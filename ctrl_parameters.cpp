#include "ctrl_parameters.h"
#include "ctrl_common.h"

#if 0 == RUN_ROS_MCU
/* simulator */
ctrl_param_msg Control_param_msg[] =
    {
        {
        /* for normal trajectory follow */
           {4, 0, {0, 0, 0, 0}, 0.0}, /* header */

            0.01F,                      /* kp_position P */
            0.0F,                      /* ki_position I */
            0.0F,                       /* kd_position D */
            0.2F,                       /* output_limit_position */

            0.1F,                      /* kp_speed P */
            0.0F,                       /* ki_speed I */
            0.0F,                       /* kd_speed D */
            0.5F,                       /* output_limit_speed */


            0.55F,                       /* Steering P */
            0.10F,                     	/* Steering I */
            0.0F,                       /* Steering D */
            0.496F,                     /* output_limit_steer */

            0.8F,                       /* min_preview_length_drive */
            1.0F,                       /* min_preview_length_reverse */
            0.5F,                       /* preview_time_angular_drive */
            2.0F,                       /* preview_time_lateral_drive */
            1.5F,                       /* preview_time_angular_reverse */
            2.0F,                       /* preview_time_lateral_reverse */
            1.0F,                       /* lateral_coefficient_drive */
            1.0F,                       /* lateral_coefficient_reverse */
            0.5F,                       /* curvature_weight */
            1.0F,                       /* k_steer_angular */
            0.1F
            },                       /* k_steer_lateral */
          
          {
            /* for parking trajectory follow */
            {4, 0, {0, 0, 0, 0}, 0.0}, /* header */

            0.01F,                      /* kp_position P */
            0.0F,                      /* ki_position I */
            0.0F,                       /* kd_position D */
            0.2F,                       /* output_limit_position */

            0.1F,                      /* kp_speed P */
            0.0F,                       /* ki_speed I */
            0.0F,                       /* kd_speed D */
            0.5F,                       /* output_limit_speed */


            0.75F,                       /* Steering P */
            0.15F,                     	/* Steering I */
            0.0F,                       /* Steering D */
            0.496F,                     /* output_limit_steer */

            1.5F,                       /* min_preview_length_drive */
            2.5F,                       /* min_preview_length_reverse */
            1.5F,                       /* preview_time_angular_drive */
            3.0F,                       /* preview_time_lateral_drive */
            2.0F,                       /* preview_time_angular_reverse */
            4.5F,                       /* preview_time_lateral_reverse */
            1.0F,                       /* lateral_coefficient_drive */
            1.0F,                       /* lateral_coefficient_reverse */
            0.5F,                       /* curvature_weight */
            1.0F,                       /* k_steer_angular */
            1.0F                        /* k_steer_lateral */
          }
};
#else
/* real vehicle */
ctrl_param_msg Control_param_msg[] =
    {
        {
        /* for normal trajectory follow */
           {4, 0, {0, 0, 0, 0}, 0.0}, /* header */

            0.01F,                      /* kp_position P */
            0.0F,                      /* ki_position I */
            0.0F,                       /* kd_position D */
            0.2F,                       /* output_limit_position */

            0.1F,                      /* kp_speed P */
            0.0F,                       /* ki_speed I */
            0.0F,                       /* kd_speed D */
            0.5F,                       /* output_limit_speed */


            0.60F,                       /* Steering P */
            0.10F,                     	/* Steering I */
            0.0F,                       /* Steering D */
            0.496F,                     /* output_limit_steer */

            2.0F,                       /* min_preview_length_drive */
            1.0F,                       /* min_preview_length_reverse */
            1.0F,                       /* preview_time_angular_drive */
            2.0F,                       /* preview_time_lateral_drive */
            1.5F,                       /* preview_time_angular_reverse */
            2.0F,                       /* preview_time_lateral_reverse */
            1.0F,                       /* lateral_coefficient_drive */
            1.0F,                       /* lateral_coefficient_reverse */
            0.5F,                       /* curvature_weight */
            1.0F,                       /* k_steer_angular */
            0.1F
        },                       /* k_steer_lateral */
          
        {
            /* for parking trajectory follow */
            {4, 0, {0, 0, 0, 0}, 0.0}, /* header */

            0.01F,                      /* kp_position P */
            0.0F,                      /* ki_position I */
            0.0F,                       /* kd_position D */
            0.2F,                       /* output_limit_position */

            0.1F,                      /* kp_speed P */
            0.0F,                       /* ki_speed I */
            0.0F,                       /* kd_speed D */
            0.5F,                       /* output_limit_speed */


            0.75F,                       /* Steering P */
            0.15F,                     	/* Steering I */
            0.0F,                       /* Steering D */
            0.496F,                     /* output_limit_steer */

            1.0F,                       /* min_preview_length_drive */
            1.5F,                       /* min_preview_length_reverse */
            2.0F,                       /* preview_time_angular_drive */
            3.0F,                       /* preview_time_lateral_drive */
            2.5F,                       /* preview_time_angular_reverse */
            4.5F,                       /* preview_time_lateral_reverse */
            1.0F,                       /* lateral_coefficient_drive */
            1.0F,                       /* lateral_coefficient_reverse */
            0.5F,                       /* curvature_weight */
            1.0F,                       /* k_steer_angular */
            0.5F                        /* k_steer_lateral */
         }
    };
#endif
