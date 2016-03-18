//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by app.rc
extern float maxd(float a,float b);
extern float mind(float a,float b);
extern int open_file(char controller_data_file[]);
extern int read_file(char input_file_name[], char output_file_name[]);

extern float flow_aggragation_3_lanes(float flow_lane_1,float flow_lane_2, float flow_lane_3);
extern float flow_aggragation_4_lanes(float flow_lane_1,float flow_lane_2, float flow_lane_3, float flow_lane_4);
extern float flow_aggragation_5_lanes(float flow_lane_1,float flow_lane_2, float flow_lane_3, float flow_lane_4, float flow_lane_5);

extern float occ_aggragation_3_lanes(float occ_lane_1,float occ_lane_2, float occ_lane_3);
extern float occ_aggragation_4_lanes(float occ_lane_1,float occ_lane_2, float occ_lane_3, float occ_lane_4);
extern float occ_aggragation_5_lanes(float occ_lane_1,float occ_lane_2, float occ_lane_3, float occ_lane_4, float occ_lane_5);

extern float speed_aggragation_3_lanes(float speed_lane_1,float speed_lane_2, float speed_lane_3);
extern float speed_aggragation_4_lanes(float speed_lane_1,float speed_lane_2, float speed_lane_3, float speed_lane_4);
extern float speed_aggragation_5_lanes(float speed_lane_1,float speed_lane_2, float speed_lane_3, float speed_lane_4, float speed_lane_5);

extern float get_split_ratio(float upstream_total_flow, float off_ramp_flow);

extern float get_queue_estimation(float in_flow, float out_flow, float previous_queue);

extern float get_density_estimation(float in_flow, float out_flow, float section_length, float previous_density, float speed);

extern float get_off_ramp_flow_by_flow_balance(float upstream_total_flow, float on_ramp_flow, float downstream_total_flow);

extern float get_on_ramp_flow_by_flow_balance(float upstream_total_flow, float downstream_total_flow, float off_ramp_flow);