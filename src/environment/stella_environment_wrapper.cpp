#include "environment/stella_environment_wrapper.hpp"

#include "environment/stella_environment.hpp"

namespace ale {

StellaEnvironmentWrapper::StellaEnvironmentWrapper(
    StellaEnvironment& environment)
    : m_environment(environment) {}

reward_t StellaEnvironmentWrapper::act(Action player_a_action,
                                       Action player_b_action) {
  return m_environment.act(player_a_action, player_b_action);
}

void StellaEnvironmentWrapper::softReset() { m_environment.softReset(); }

void StellaEnvironmentWrapper::pressSelect(size_t num_steps) {
  m_environment.pressSelect(num_steps);
}

Random& StellaEnvironmentWrapper::getEnvironmentRNG() {
  return m_environment.getEnvironmentRNG();
}

}  // namespace ale
