#include "gtest/gtest.h"
#include <random>
#include "Vregfile.h"

class RegfileTest : public ::testing::Test {
protected:
    void TearDown() override { model->final(); }

    std::shared_ptr<VerilatedContext> contextp = std::make_unique<VerilatedContext>();
    std::shared_ptr<Vregfile> model = std::make_unique<Vregfile>(contextp.get());

    void set_reg(int index, uint32_t value) {
        model->A3 = index;
        model->WE3 = 1;
        model->D3 = value;
        model->clk = 1;
        model->eval();
        model->clk = 0;
        model->eval();
        model->WE3 = 0;
    }

    uint32_t get_reg(int index) {
        model->A1 = index;
        model->clk = 0;
        model->eval();
        model->clk = 1;
        model->eval();
        return model->D1;
    }
};

TEST_F(RegfileTest, ReadTest) {

    model->A1 = 1;
    model->A2 = 2;
    model->eval();
    EXPECT_EQ(0x0, model->D1) << "D1 = " << std::hex << model->D1 << std::dec;
    EXPECT_EQ(0x0, model->D2) << "D2 = " << std::hex << model->D2 << std::dec;

    model->A1 = 3;
    model->A2 = 1;
    model->eval();
    EXPECT_EQ(0x0, model->D1) << "D1 = " << std::hex << model->D1 << std::dec;
    EXPECT_EQ(0x0, model->D2) << "D2 = " << std::hex << model->D2 << std::dec;
}

TEST_F(RegfileTest, WriteTest) {
    set_reg(1, 0xdeadbeef);
    set_reg(2, 0xcafebebe);
    set_reg(3, 0x12345678);

    model->A1 = 1;
    model->A2 = 2;
    model->eval();
    EXPECT_EQ(0xdeadbeef, model->D1) << "D1 = " << std::hex << model->D1 << std::dec;
    EXPECT_EQ(0xcafebebe, model->D2) << "D2 = " << std::hex << model->D2 << std::dec;

    model->A1 = 3;
    model->A2 = 1;
    model->eval();
    EXPECT_EQ(0x12345678, model->D1) << "D1 = " << std::hex << model->D1 << std::dec;
    EXPECT_EQ(0xdeadbeef, model->D2) << "D2 = " << std::hex << model->D2 << std::dec;
}

TEST_F(RegfileTest, SetGetTest) {
    set_reg(1, 0xdeadbeef);
    EXPECT_EQ(0xdeadbeef, get_reg( 1)) << "D1 = " << std::hex << get_reg( 1) << std::dec;
}
