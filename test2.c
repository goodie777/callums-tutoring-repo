typedef struct
{
    uint32_t command_id;
} TC_101;

void HandleCommand(TC_101 tc)
{
    printf("%u\n", tc.command_id);
}

int main(void)
{
    TC_101 tc;

    tc.command_id = 42;

    HandleCommand(tc);
}